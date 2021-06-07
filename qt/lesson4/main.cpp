#include <QCoreApplication>
#include <QVector>
#include <QTextStream>

int main(void) {

    QTextStream out(stdout);

    // Создаем вектор, содержащий целочисленные значения
    QVector<int> vals = {1, 2, 3, 4, 5};

    // С помощью метода size() возвращаем размер вектора (количество элементов, содержащихся в нем)
    out << "The size of the vector is: " << vals.size() << "\n";

    out << "The first item is: " << vals.first() <<  "\n"; // получаем первый элемент вектора
    out << "The last item is: " << vals.last() <<  "\n"; // получаем последний элемент вектора

    vals.append(6); // вставляем новый элемент в конец вектора
    vals.prepend(0); // вставляем новый элемент в начало вектора

    out << "Elements: ";

    // Перебираем элементы вектора и выводим их на экран
    for (int val : vals) {
        out << val << "\n";
    }

    out <<  "\n";

    // Создаем контейнер QList, в котором будем хранить имена писателей
        QList<QString> authors = {"Balzac", "Tolstoy",
            "Gulbranssen", "London"};

        // Перебираем каждый элемент массива и выводим на экран
        for (int i=0; i < authors.size(); ++i) {

            out << authors.at(i) << "\n"; // метод at() возвращает элемент с указанным индексом
        }

        // С помощью оператора << вставляем в список 2 новых элемента
        authors << "Galsworthy" << "Sienkiewicz";

        out << "***********************" << "\n";

        // С помощью метода sort() сортируем список в порядке возрастания
        std::sort(authors.begin(), authors.end());

        // Выводим на экран отсортированный список
        out << "Sorted:" << "\n";
        for (QString author : authors) {

            out << author << "\n";
        }


        // Создаем 2 набора цветов
           QSet<QString> cols1 = {"yellow", "red", "blue"};
           QSet<QString> cols2 = {"blue", "pink", "orange"};

           // С помощью метода size() возвращаем размер набора
           out << "There are " << cols1.size() << " values in the set" << "\n";

           // С помощью метода insert() вставляем новый элемент
           cols1.insert("brown");

           out << "There are " << cols1.size() << " values in the set" << "\n";

           // Метод unite() выполняет объединение двух наборов
           cols1.unite(cols2);

           out << "There are " << cols1.size() << " values in the set" << "\n";

           // Перебираем все элементы набора cols1 и выводим их на экран
           for (QString val : cols1) {
               out << val << "\n";
           }

           // Создаем отдельный список из набора элементов cols1 для их сортировки
           QList<QString> lcols = cols1.values(); // метод values() возвращает новый QList, содержащий элементы набора
           std::sort(lcols.begin(), lcols.end());

           out << "*********************" << "\n";
           out << "Sorted:" << "\n";

           for (QString val : lcols) {
               out << val << "\n";
           }
    return 0;
}
