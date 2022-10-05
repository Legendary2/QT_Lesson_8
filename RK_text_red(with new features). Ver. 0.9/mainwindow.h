#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "helpform.h"
#include "fileview.h"
#include <QMainWindow>
#include <QtWidgets>
#include <QTranslator>
#include <QEvent>
#include <QShortcut>
#include <QModelIndex>
#include <QTextEdit>
#include <QMenu>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class QMenu;
class QMdiArea;
class QSignalMapper;
class DocWindow;

class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_actionEnglish_triggered();
    void on_actionRussian_triggered();
    void on_listView_doubleClicked(const QModelIndex &index);
    void on_actionNew_triggered();
    void on_actionOpen_triggered();
    void on_actionClose_triggered();
    void on_actionSave_triggered();
    void on_actionSaveAs_triggered();
    void on_actionPrint_triggered();
    void on_actionLight_triggered();
    void on_actionDark_triggered();
    void on_actionHelp_triggered();
    void on_actionReadOnly_triggered();
    void on_ActionExit_triggered();
    void mouseReleaseEvent(QMouseEvent *event);

private:

    void FileSave();
    void FileSaveAs();
    void FileOpen();
    void FileNew();
    void ReadOnlyFile();
    void Init();
    void ExtendedFileSave();
    void changeTranslator(QString postfix);
    void changeEvent(QEvent *event);

signals:

    void changeWindowTitle(const QString&);

private:
    Ui::MainWindow *ui;
    QString openedFileName;
    QString filter;
    QString m_strFileName;
    QTranslator* translator;
    QMenu* fileMenu;
    QMenu* shortcutSubMenu;
    QAction* newAction;
    QAction* openAction;
    QAction* readOnlyAction;
    QAction* saveAction;
    QAction* saveAsAction;
    QAction* closeAction;
    QAction* exitAction;
    QFileInfoList *aDirList;
    QListViewExplorerModel *model;
    QDir currentFolder;
    QMdiArea*      m_pma;
    QMenu*         m_pmnuWindows;
    QSignalMapper* m_psigMapper;

    DocWindow* createNewDoc();

};
#endif // MAINWINDOW_H
