#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QLayout>
#include "list.h"
#include "trackersql.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void windowFields(void);        // Set the `MainWindow` widget's to be displayed.
    void createWindowFields(void);  // Create widget fields to be displayed.
    void arrangeWindowFields(void); // Arrange the `MainWindow` layout.

    TrackerSql *sqlModel;           // Access to database queries.
    List *cardList;                 // Visual widget for display. Holds a list of cards in database.

    QHBoxLayout *hCard;             // Layout container for `MainWindow`.
};

#endif // MAINWINDOW_H
