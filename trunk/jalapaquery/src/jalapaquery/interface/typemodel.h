#ifndef TYPEMODEL_H
#define TYPEMODEL_H

#include <QIcon>
#include <QString>

class TypeModel {
    Q_PROPERTY(QString m_name READ name);
    Q_PROPERTY(QIcon m_icon READ icon);
    Q_PROPERTY(QString m_description READ description);

public:
    TypeModel(QIcon icon, QString name, QString description) {
        m_icon = icon;
        m_name = name;
        m_description = description;
    }
    QIcon smallIcon() { return m_smallIcon; }
    QIcon icon() { return m_icon; }
    QString name() { return m_name; }
    QString description() { return m_description; }

    void setSmallIcon(QIcon icon) {
        m_smallIcon = icon;
    }

private:
    QIcon m_icon;
    QIcon m_smallIcon;
    QString m_name;
    QString m_description;
};

#endif // TYPEMODEL_H
