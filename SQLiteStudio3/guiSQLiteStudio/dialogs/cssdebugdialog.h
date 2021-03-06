#ifndef CSSDEBUGDIALOG_H
#define CSSDEBUGDIALOG_H

#include <QDialog>

namespace Ui {
    class CssDebugDialog;
}

class QAbstractButton;

class CssDebugDialog : public QDialog
{
        Q_OBJECT

    public:
        explicit CssDebugDialog(QWidget *parent = 0);
        ~CssDebugDialog();

    protected:
        void closeEvent(QCloseEvent*);

    private:
        Ui::CssDebugDialog *ui;
        QString appliedCss;

    private slots:
        void buttonClicked(QAbstractButton* button);
        void updateState();
};

#endif // CSSDEBUGDIALOG_H
