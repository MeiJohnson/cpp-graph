#include <QTextStream>

int main() {

   QTextStream out(stdout);

   // Исходная строка
   QString str = "The night train";

   // Возвращаем подстроку длиной 5 символов, начиная с правого края строки str
   out << str.right(5) << "\n";

   // Возвращаем подстроку длиной 9 символов, начиная с левого края строки str
   out << str.left(9) << "\n";

   // Возвращаем подстроку длиной 5 символов, начиная с 4-ого символа строки str
   out << str.mid(4, 5) << "\n";

   QString str2("The big apple");
   QStringRef sub(&str2, 0, 7);

   out << sub.toString() << "\n";

   return 0;
}
