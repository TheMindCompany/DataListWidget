#ifndef TRACKERSQL_H
#define TRACKERSQL_H

#include <QObject>
#include <QSqlQueryModel>

class TrackerSql : public QSqlQueryModel
{
    Q_OBJECT
public:
    TrackerSql(QObject *parent = 0);

    void connectSQL(void);        // Start sql connections and initialize `dbQuery`(s).
    void setConnection(void);     // Set the connection parameters.
    void createConnection(void);  // Start the `db` connection.

    void setTableQuery(void); // Create `dbQuery`(s).

    QSqlDatabase    db;
    QString         dbHost,
                    dbName,
                    dbUser,
                    dbPass,
                    dbString;
    qint32          dbPort;

};

#endif // TRACKERSQL_H
