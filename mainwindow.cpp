#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <bitset>
#include <QDebug>
#include <QStyle>
#include <QFontDatabase>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    int id = QFontDatabase::addApplicationFont(":/fonts/XDRA.ttf"); //путь к шрифту
    QString family = QFontDatabase::applicationFontFamilies(id).at(0); //имя шрифта
    QFont fonk(family);  // QFont c вашим шрифтом
    qApp->setFont(fonk);

    ui->setupUi(this);

    //меню
    connect(ui->menu1go, SIGNAL(clicked()), this, SLOT(on_menu1go_clicked())); //1
    connect(ui->menu2go, SIGNAL(clicked()), this, SLOT(on_menu2go_clicked())); //2
    connect(ui->menu3go, SIGNAL(clicked()), this, SLOT(on_menu3go_clicked())); //3
    connect(ui->menu4go, SIGNAL(clicked()), this, SLOT(on_menu4go_clicked())); //4
    connect(ui->menu5go, SIGNAL(clicked()), this, SLOT(on_menu5go_clicked())); //5
    connect(ui->menu6go, SIGNAL(clicked()), this, SLOT(on_menu6go_clicked())); //6
    connect(ui->menu7go, SIGNAL(clicked()), this, SLOT(on_menu7go_clicked())); //7
    connect(ui->menu8go, SIGNAL(clicked()), this, SLOT(on_menu8go_clicked())); //8
    connect(ui->menu9go, SIGNAL(clicked()), this, SLOT(on_menu9go_clicked())); //9
    connect(ui->menu10go, SIGNAL(clicked()), this, SLOT(on_menu10go_clicked())); //10
    connect(ui->menu11go, SIGNAL(clicked()), this, SLOT(on_menu11go_clicked())); //11
    connect(ui->menu12go, SIGNAL(clicked()), this, SLOT(on_menu12go_clicked())); //12
    connect(ui->menu_exit, SIGNAL(clicked()), this, SLOT(on_menu_exit_clicked())); //выход из меню
    connect(ui->exit, SIGNAL(clicked()), qApp, SLOT(closeAllWindows())); //выход из приложения

    //1 задание
    connect(ui->pushButton_start1, SIGNAL(clicked()), this, SLOT(on_pushButton_start1_clicked())); //выполнение
    connect(ui->pushButton_backtomenu1, SIGNAL(clicked()), this, SLOT(on_menu_clicked())); //возвращение в меню

    //2 задание
    connect(ui->pushButton_start2, SIGNAL(clicked()), this, SLOT(on_pushButton_start2_clicked())); //выполнение
    connect(ui->pushButton_backtomenu2, SIGNAL(clicked()), this, SLOT(on_menu_clicked())); //возвращение в меню

    //3 задание
    connect(ui->pushButton_start3, SIGNAL(clicked()), this, SLOT(on_pushButton_start3_clicked()));
    connect(ui->pushButton_backtomenu3, SIGNAL(clicked()), this, SLOT(on_menu_clicked())); //возвращение в меню

    //4 задание
    connect(ui->restart4, SIGNAL(clicked()), this, SLOT(on_menu4go_clicked())); //рестарт игры
    connect(ui->pushButton_backtomenu4, SIGNAL(clicked()), this, SLOT(on_menu_clicked())); //возвращение в меню
    //кнопки ответов
    connect(ui->pushButton_4_0, SIGNAL(clicked()), this, SLOT(on_pushButton_start4_clicked()));
    connect(ui->pushButton_4_1, SIGNAL(clicked()), this, SLOT(on_pushButton_start4_clicked()));
    connect(ui->pushButton_4_2, SIGNAL(clicked()), this, SLOT(on_pushButton_start4_clicked()));
    connect(ui->pushButton_4_3, SIGNAL(clicked()), this, SLOT(on_pushButton_start4_clicked()));
    connect(ui->pushButton_4_4, SIGNAL(clicked()), this, SLOT(on_pushButton_start4_clicked()));
    connect(ui->pushButton_4_5, SIGNAL(clicked()), this, SLOT(on_pushButton_start4_clicked()));
    connect(ui->pushButton_4_6, SIGNAL(clicked()), this, SLOT(on_pushButton_start4_clicked()));
    connect(ui->pushButton_4_7, SIGNAL(clicked()), this, SLOT(on_pushButton_start4_clicked()));
    connect(ui->pushButton_4_8, SIGNAL(clicked()), this, SLOT(on_pushButton_start4_clicked()));
    connect(ui->pushButton_4_9, SIGNAL(clicked()), this, SLOT(on_pushButton_start4_clicked()));
    connect(ui->pushButton_4_10, SIGNAL(clicked()), this, SLOT(on_pushButton_start4_clicked()));
    connect(ui->pushButton_4_11, SIGNAL(clicked()), this, SLOT(on_pushButton_start4_clicked()));
    connect(ui->pushButton_4_12, SIGNAL(clicked()), this, SLOT(on_pushButton_start4_clicked()));
    connect(ui->pushButton_4_13, SIGNAL(clicked()), this, SLOT(on_pushButton_start4_clicked()));
    connect(ui->pushButton_4_14, SIGNAL(clicked()), this, SLOT(on_pushButton_start4_clicked()));
    connect(ui->pushButton_4_15, SIGNAL(clicked()), this, SLOT(on_pushButton_start4_clicked()));

    //5 задание
    //connect(ui->pushButton_start5,SIGNAL(clicked()),this,SLOT(on_pushButton_start5_clicked()));
    connect(ui->pushButton_backtomenu5, SIGNAL(clicked()), this, SLOT(on_menu_clicked())); // возвращение в меню
    connect(ui->restart5, SIGNAL(clicked()), this, SLOT(on_menu5go_clicked())); //рестарт игры

    //6 задание
    connect(ui->pushButton_backtomenu6, SIGNAL(clicked()), this, SLOT(on_menu_clicked())); // возвращение в меню
    connect(ui->restart6, SIGNAL(clicked()), this, SLOT(on_menu6go_clicked())); //рестарт игры

    //7 задание
    connect(ui->pushButton_backtomenu7, SIGNAL(clicked()), this, SLOT(on_menu_clicked())); // возвращение в меню
    connect(ui->restart7, SIGNAL(clicked()), this, SLOT(on_menu7go_clicked())); //рестарт игры

    //8 задание
    connect(ui->pushButton_start8,SIGNAL(clicked()),this,SLOT(on_pushButton_start8_clicked()));
    connect(ui->pushButton_backtomenu8, SIGNAL(clicked()), this, SLOT(on_menu_clicked())); // возвращение в меню

    //9 задание
    connect(ui->pushButton_start9,SIGNAL(clicked()),this,SLOT(on_pushButton_start9_clicked()));
    connect(ui->pushButton_backtomenu9, SIGNAL(clicked()), this, SLOT(on_menu_clicked())); // возвращение в меню

    //10 задание
    //connect(ui->pushButton_start10,SIGNAL(clicked()),this,SLOT(on_pushButton_start10_clicked()));
    connect(ui->pushButton_backtomenu10, SIGNAL(clicked()), this, SLOT(on_menu_clicked())); // возвращение в меню
    connect(ui->restart10, SIGNAL(clicked()), this, SLOT(on_menu10go_clicked())); //рестарт игры

    //11 задание
    //connect(ui->pushButton_start11,SIGNAL(clicked()),this,SLOT(on_pushButton_start11_clicked()));
    connect(ui->pushButton_backtomenu11, SIGNAL(clicked()), this, SLOT(on_menu_clicked())); // возвращение в меню
    connect(ui->restart11, SIGNAL(clicked()), this, SLOT(on_menu11go_clicked())); //рестарт игры

    //12 задание
    connect(ui->pushButton_start12,SIGNAL(clicked()),this,SLOT(on_pushButton_start12_clicked()));
    connect(ui->pushButton_backtomenu12, SIGNAL(clicked()), this, SLOT(on_menu_clicked())); // возвращение в меню
}

MainWindow::~MainWindow() {
    delete ui;
}

QString css_checkbox_start =
        "QCheckBox "
            "{"
                "color: white;"
            "}"
        "QCheckBox::indicator "
            "{"
                "width: 22 px;"
                "height: 22 px;"
            "}"
        "QCheckBox::indicator:checked "
            "{"
                "border: 4px solid white;"
                "background-color: #fa428d;"
            "}"
        "QCheckBox::indicator:unchecked "
            "{"
                "border: 4px solid white;"
                "background-color: rgba(0, 0, 0, 0.0);"
            "}";

QString css_checkbox_green =
        "QCheckBox "
            "{"
                "color: #4cd984;;"
            "}"
        "QCheckBox::indicator:checked "
            "{"
                "background-color: #4cd984;"
                "color: #4cd984;"
            "}";

QString css_radio_button_start =
              "QRadioButton "
                  "{"
                      "color: white;"
                  "}"
              "QRadioButton::indicator "
                  "{"
                      "width: 22 px;"
                      "height: 22 px;"
                      "border-radius: 15px;"
                  "}"
              "QRadioButton::indicator:checked "
                  "{"
                      "background-color: #fa428d;"
                      "border: 4px solid white;"
                  "}"
              "QRadioButton::indicator:unchecked "
                  "{"
                      "background-color: rgba(0, 0, 0, 0.0);"
                      "border: 4px solid white;"
                  "}";

QString css_radio_button_green =
              "QRadioButton "
                "{"
                    "color: #4cd984;"
                "}"
              "QRadioButton::indicator:checked "
                "{"
                    "background-color: #4cd984;"
                    "color: #4cd984;"
                "}";

QString generateFunction(int m) {
    QString str_function = "";
    std::vector<bool> f(m);
    for (int i = 0; i < m; i++) {
            f[i] = rand() % 2;
            str_function.append(QString::number(f[i]));
        }
    return str_function;
}

bool functionIsRight(int v, std::string s_check) {
    bool flag_check = true;
    for (int i = 0; i < v; i++) {
        if (s_check[i] != '0' && s_check[i] != '1') {
            flag_check = false;
            break;
        }
    }
    return flag_check;
}

int countOfArgs(int v) {
    int p = 0;
    while (v >>= 1) {
        p++;
    }
    return p;
}

bool isMon(std::string f, int p) {
    int str_size = f.size();
    for (int i = 0; i < p; i++) {
        std::string tempStr = "", tempStr2 = "";
        int temp = 1 << (i + 1);
        int part_size = str_size / temp;
        bool flag = true;
        int counter = 0;
        for (int j = 0; j <= str_size; j++) {
            if (j % part_size == 0 && j != 0) {
                flag = !flag;
                counter++;
                if (counter == 2) {
                    counter = 0;
                    if ((stoi(tempStr, nullptr, 2)) > (stoi(tempStr2, nullptr, 2))) {
                        return false;
                    }
                    tempStr = "";
                    tempStr2 = "";
                }
            }
            if (j != str_size) {
                if (flag) {
                    tempStr.push_back(f[j]);
                } else {
                    tempStr2.push_back(f[j]);
                }
            }
        }
    }
    return true;
}

bool isT1(std::string f) {
    return (f[f.size()-1] - '0' == 1);
}

bool isT0(std::string f) {
    return (f[0] - '0' == 0);
}

bool isLin(std::string f) {
    int f_size = f.size();
    std::string jegalka = "";
    for (int i = 0; i < f_size; i++) {
        std::string temp = "";
        int t = 0;
        for (int j = i; j < f_size; j++) {
            int s = (t + (int)f[j-i] - '0') % 2;
            temp.push_back(s + '0');
            t = (int)f[j-i] - '0';
            if (j == i) {
                jegalka.push_back(temp[j-i]);
            }
        }
        f = temp.substr(1, temp.size()-1);
    }
    for (int i = 3; i < f_size; i++) {
        if (!(i && !(i & (i - 1))) && jegalka[i] == '1') {
            return false;
        }
    }
    return true;
}

bool isSamodv(std::string f) {
    for (int i = 0; i < int(f.size() / 2); i++) {
        if (f[i] == f[f.size() - i - 1]) {
                return false;
        }
    }
    return true;
}

std::vector<std::vector<int>> generateTable(int m, int p) {
    std::vector<std::vector<int>> nabor(m, std::vector<int> (p));
    for (int i = 0; i < m; i++) {
            int tmp = i;
            for (int j = 0; j < p; j++) {
                nabor[i][j] = tmp & 1;
                tmp >>= 1;
            }
        }
        for (int j = 0; j < m; j++) {
            for (int i = 0; i < p / 2; i++) {
                int t = nabor[j][i];
                nabor[j][i] = nabor[j][p - i - 1];
                nabor[j][p - i - 1] = t;
            }
        }
    return nabor;
}

std::string minDNF(std::string s, int n){
    std::vector<std::string> nb; // Вектор наборов для склеек
        std::vector<std::vector<int>> nm; // Вектор номеров склеивающихся наборов

        // Цикл для получения наборов, на которых функция возвращает 1
        for (int i = 0; i < int(s.length()); i++) {
            if (s[i] == '1') {
                int b = i;
                std::vector<int> q;
                q.push_back(i);
                nm.push_back(q);
                std::string str_bit;

            // Побитовое представление числа
                for (int j = 0; j < n; j++) {
                    int bit = b & 1;
                    str_bit.insert(0, std::to_string(bit));
                    b = b >> 1;
                }
                nb.push_back(str_bit);
            }
        }
        int min_count = 1; // Счетчик минимальных различий между наборами
        while (min_count == 1) {
            min_count = n + 1;
            std::vector<std::string> reserve_nb; // Резервный вектор для склеек
            std::vector<std::vector<int>> reserve_nm; // Резервный вектор номеров
            std::vector<bool> flags(nb.size(), true);

        // Цикл для сравнения строк
            for (int i = 0; i < int(nb.size()); i++) {
                for (int j = i + 1; j < int(nb.size()); j++) {
                    int counter = 0; // Счетчик различий между наборами
                    int pos; // Позиция, в которой наборы различаются

            // Цикл для сравнения наборов
                    for (int k = 0; k < n; k++) {
                        if (nb[i][k] != nb[j][k]) {
                            counter++;
                            pos = k;
                        }
                    }
                    if (counter == 1) {
                        flags[i] = false;
                        flags[j] = false;
                        std::string s = nb[j];
                        s = s.replace(pos, 1, "_"); // Полученный набор после склейки

                // Проверка на уникальность
                bool uniq_flag = true;
                if (reserve_nb.size() > 0) {
                    for (int uniq = 0; uniq < int(reserve_nb.size()); uniq++) {
                        if (reserve_nb[uniq] == s) {
                            uniq_flag = false;
                            break;
                        }
                    }
                }

                // Добавление набора и добавление номеров в резервные вектора
                        if (uniq_flag) {
                            reserve_nb.push_back(s);
                            std::vector<int> q;
                            for (int k = 0; k < int(nm[i].size()); k++) {
                                q.push_back(nm[i][k]);
                            }
                            for (int k = 0; k < int(nm[j].size()); k++) {
                    q.push_back(nm[j][k]);
                            }
                            reserve_nm.push_back(q);
                        }
                    }
                    min_count = std::min(counter, min_count);
                }
            }

        // Добавление наборов не участвующих в склейке и соответствующих им номеров
            for (int i = 0; i < int(flags.size()); i++) {
                if (flags[i]) {
                    reserve_nb.push_back(nb[i]);
                    std::vector<int> q;
                    for (int k = 0; k < int(nm[i].size()); k++) {
                        q.push_back(nm[i][k]);
                    }
                    reserve_nm.push_back(q);
                }
            }

        // Подготовка векторов для нового шага
            nb.resize(reserve_nb.size());

        // resize двумерного вектора
            if (reserve_nm.size() != 0) {
                nm.assign(reserve_nm.size(), std::vector<int>(0));
                for (int i = 0; i < int(nm.size()); i++) {
                    nm[i].resize(reserve_nm[i].size());
                }
            }
        nb = reserve_nb;
            nm = reserve_nm;
        }
        std::vector<std::vector<std::string>> ans; // Вектор возможных вариантов ответа
        int idx; // Индекс ответа с минимальным кол-вом вхождений переменных
        int cnt_min = INT_MAX; // Переменная для нахождения минимального кол-ва вхождений переменных
        std::vector<std::vector<int>> nm_temp(nm); // Вектор для сохранения вектора nm
        std::vector<std::string> nb_temp(nb); // Вектор для сохранения вектора nb

        // Полный перебор всех возможных вариантов ответа
        for (int p = 0; p < int(nm.size()); p++) {
        nb = nb_temp;
        nm = nm_temp;
            std::vector<std::string> ans_tmp; // Вектор ответа для данного варианта
            std::vector<std::vector<int>> save_nm(nm); // Вектор для сохранения наборов
            for (int i = p; i < int(p + nm.size()); i++) {
                int step = i % nm.size(); // Переменная для кольцевания по вектору номеров
                for (int j = 0; j < int(nm.size()); j++) {
                    if (step != j) {
                        for (int k = 0; k < int(nm[step].size()); k++) {
                            for (int x = 0; x < int(nm[j].size()); x++) {
                                if (nm[step][k] == nm[j][x]) {
                                    nm[step].erase(nm[step].begin() + k);
                                    k--;
                                }
                            }
                        }
                    }
                }

            // Если набор не перекрывается, значит добавляем в ответ,
            // иначе удаляем импликанту и соответствующий набор номеров
                if (nm[step].size() != 0) {
                    ans_tmp.push_back(nb[step]);
                    nm = save_nm;
                } else {
                    nm.erase(nm.begin() + step);
                    save_nm.erase(save_nm.begin() + step);
                    nb.erase(nb.begin() + step);
                    i--;
                }
            }
            ans.push_back(ans_tmp);

        // Подсчет вхождений переменных в ответ
            int cnt = 0;
            for (int i = 0; i < int(ans_tmp.size()); i++) {
                for (int j = 0; j < int(ans_tmp[i].length()); j++) {
                    if (ans_tmp[i][j] != '_') {
                        cnt++;
                    }
                }
            }
            if (cnt_min > cnt) {
                idx = p;
                cnt_min = cnt;
            }
        }
        std::vector<std::string> finalAns;
        for (auto i : ans[idx]) {
            finalAns.push_back(i);
        }
        std::string min_dnf;
        int count = 0;
        for (int i = 0; i < int(finalAns.size()); i++) {
            for (int j = 0; j < n; j++) {
                if (finalAns[i][j] == '_') {
                    continue;
                } else if (finalAns[i][j] == '0') {
                    min_dnf = min_dnf + "-x" + std::to_string(j + 1) + "&";
                } else if (finalAns[i][j] == '1') {
                    min_dnf = min_dnf + "x" + std::to_string(j + 1) + "&";
                }
            }
            count++;
            min_dnf.replace(min_dnf.length() - 1, 1, "");
            min_dnf = min_dnf + " v ";
            if (++count %3 == 0){
                min_dnf += "\nv ";
            }
        }
        if (count %3 == 0){
            min_dnf.replace(min_dnf.length()-3 , 3, "");
        }
        min_dnf.replace(min_dnf.length()-3 , 3, "");
        return min_dnf;
}

// 1 задание
void MainWindow::on_menu1go_clicked() {
    ui->Line1->setText("");
    ui->ans1->setText("");
    ui->stackedWidget->setCurrentIndex(2); //из меню в 1 задание
}

void MainWindow::on_pushButton_start1_clicked() {
    int n = (ui->Line1->text()).toInt();
    if (n >= 2 && n <= 5 && (ui->Line1->text()) != "") {
        ui->ans1->setText(generateFunction(1 << n));
    } else {
        ui->ans1->setText("Неверный ввод \nВведите число от 2 до 5");
    }
}

// 2 задание
void MainWindow::on_menu2go_clicked() {
    ui->ans2->setText("");
    ui->Line2_arg->setText("");
    ui->Line2_function->setText("");
    ui->radioButton_0->setChecked(true);
    ui->stackedWidget->setCurrentIndex(3); //из меню во 2 задание
}

void MainWindow::on_pushButton_start2_clicked() {
    QString str_function = ui->Line2_function->text();
    int v = str_function.size(); //длина функции
    std::string s_check = str_function.toStdString();
    if (functionIsRight(v, s_check)) {
        if (!(v && !(v & (v - 1))) || countOfArgs(v) > 5 || countOfArgs(v) < 2) {
            ui->ans2->setText("Неверный ввод. \nФункция должна состоять \nиз 2^n значений, n∈[2;5]");
        } else {
            int n = (ui->Line2_arg->text()).toInt(); //введенный номер аргумента
            if (n > countOfArgs(v) || n < 1) {
                ui->ans2->setText("Неверно введен номер аргумента");
            } else {
                int k = 1 << n; //2^n
                k = v / k; //деление функции по k значений
                int zo = 1; //остаточная, выбранная пользователем
                if (ui->radioButton_0->isChecked()) {
                    zo = 0;
                }
                int step = k * zo;
                int limit = (zo == 1) ? k * 2 : k; //точка перехода
                QString ans = "";
                for (int i = 0; i < v / 2; i++) {
                    ans.append(str_function[step]);
                    if (++step == limit) {
                        step += k;
                        limit += 2 * k;
                    }
                }
                ui->ans2->setText(ans);
            }
        }
    } else {
    ui->ans2->setText("Неверный ввод. \nФункция должна состоять из 0 и 1");
    }
}

//3 задание
void MainWindow::on_menu3go_clicked() {
    ui->ans3->setText("");
    ui->lineEdit_3_arg->setText("");
    ui->lineEdit_3_ed_ost->setText("");
    ui->lineEdit_3_null_ost->setText("");
    ui->stackedWidget->setCurrentIndex(4); //из меню в 3 задание
}

void MainWindow::on_pushButton_start3_clicked() {
    QString s1 = ui->lineEdit_3_null_ost->text();
    QString s2 = ui->lineEdit_3_ed_ost->text();
    int n = (ui->lineEdit_3_arg->text()).toInt();
    int k = 1 << n; //2^n
    int sz = s1.size() + s2.size();
    int sz1 = 2 * s1.size(); //длина 1 функции
    int sz2 = 2 * s2.size(); //длина 2 функции
    bool flag = false;
    int limit = sz / k; //точка смены остаточной
    int step = 0;
    QString ans = "";
    if (!(sz1 && !(sz1 & (sz1 - 1))) || !(sz2 && !(sz2 & (sz2 - 1))) || !(sz && !(sz & (sz - 1))) || sz > 32 || sz <= 2) {
        ui->ans3->setText("Неверный ввод. \nФункция должна состоять \nиз 2^n значений, n∈[2;5]");
    } else {
        bool flag_check = true;
        std::string s1_user = s1.toStdString();
        std::string s2_user = s2.toStdString();
        for (int i = 0; i < s1.size(); i++) {
            if ((s1_user[i] != '0' && s1_user[i] != '1') || (s2_user[i] != '0' && s2_user[i] != '1')) {
                flag_check = false;
                ui->ans3->setText("Неверный ввод. \nФункция должна состоять из 0 и 1");
                break;
            }
        }
        if (flag_check) {
            if (n > countOfArgs(sz) || n < 1) {
                ui->ans3->setText("Неверно введен номер аргумента");
            } else {
                for (int i = 0, x = 0, y = 0; i < sz; i++) {
                    if (step == limit) {
                        flag = !flag;
                        step = 0;
                    }
                    if (!flag) {
                        ans.append(s1[x++]);
                    } else {
                        ans.append(s2[y++]);
                    }
                    step++;
                }
                ui->ans3->setText(ans);
            }
        }
    }
}

//4 задание
std::vector<int> right_answers_4(16); //вектор правильных ответов
int n4 = 0; //right_answers_4[i]
int score = 0;
bool flag = false;

void MainWindow::on_menu4go_clicked() {
    n4 = 0;
    score = 0;
    flag = false;
    ui->ans4->setText("");
    ui->ans4->setVisible(false);
    ui->stackedWidget->setCurrentIndex(5); //из меню в 4 задание
    for (int i = 0; i < 16; i++) {
        this->findChild <QPushButton *> ("pushButton_4_" + QString::number(i))->setEnabled(true);
    }
    ui->restart4->setVisible(false);
    int a[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    std::random_shuffle(std::begin(a), std::end(a));
    for (int i = 0; i < 16; i++) {
        right_answers_4[i] = a[i];
    }
    std::string v = (std::bitset <4> (right_answers_4[0])).to_string();
    ui->label_4_function->setText(QString::fromStdString(v));
    for (int i = 0; i < 16; i++) {
        this->findChild <QPushButton *> ("pushButton_4_" + QString::number(i))->setStyleSheet(
            "QPushButton:enabled:hover "
                "{"
                    "background-color: #ffd56b;"
                    "color: #ff7538; "
                "}"
            "QPushButton:enabled:pressed "
                "{"
                    "background-color: #AAAAAA;"
                    "color: #fff;"
                "}"
            "QPushButton:disabled "
                "{"
                    "background-color: rgba(255, 255, 255, 0);"
                    "color:  rgba(255, 255, 255, 0);"
                "}"
            "QPushButton:disabled "
                "{"
                    "background-color: rgba(255, 255, 255, 0);"
                    "color:  rgba(255, 255, 255, 0);"
                "}"
        );
    }
}

void MainWindow::on_pushButton_start4_clicked() {
    if (!flag) {
        QString s = "pushButton_4_";
        s.append(QString::number(right_answers_4[n4]));
        if ((sender()->objectName()) == s) {
            sender()->setProperty("enabled", false);
            n4++;
            score++;
            if (score == 16) {
                ui->label_4_function->setText("Победа! \nВы ответили верно на 16/16 функций");
                ui->restart4->setVisible(true);
            } else {
                std::string v = (std::bitset < 4 > (right_answers_4[n4])).to_string();
                ui->label_4_function->setText(QString::fromStdString(v));
            }
        } else {
            ui->ans4->setVisible(true);
            this->findChild < QPushButton * > ("pushButton_4_" + QString::number(right_answers_4[n4]))->setStyleSheet(
                "QPushButton:enabled "
                "{"
                "color: #fff; "
                "background-color: #4cd984; "
                "}"
            );
            flag = true;
            this->findChild < QPushButton * > (sender()->objectName())->setStyleSheet(
                "QPushButton:enabled "
                "{"
                "color: #fff; "
                "background-color: #ff6d69; "
                "}"
            );
            ui->ans4->setText("Неверно! Вы ответили верно на: " + QString::number(score) + "/16 функций");
            ui->restart4->setVisible(true);
        }
    }
}

//5 задание
int flags[5] = {0, 0, 0, 0, 0};
int k_arg = 5;
int score5 = 0;
bool flag5 = false;

void MainWindow::on_menu5go_clicked() {
    if (flag5) {
        flag5 = false;
    }
    for (int i = 0; i < 5; i++) {
        flags[i] = 0;
    }
    ui->label_5_score->setText("");
    for (int i = 1; i <= 5; i++) {
        this->findChild <QGroupBox *> ("groupBox_" + QString::number(i))->setVisible(true);
    }
    ui->restart5->setVisible(false);
    ui->stackedWidget->setCurrentIndex(6); //из меню в 5 задание
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 2; j++) {
            this->findChild <QRadioButton *> ("radioButton_" + QString::number(i) + "_" + QString::number(j))->setEnabled(true);
        }
        this->findChild <QRadioButton *> ("radioButton_" + QString::number(i) + "_1")->setChecked(true);
    }
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 2; j++) {
            this->findChild <QRadioButton *> ("radioButton_" + QString::number(i) + "_" + QString::number(j))
                    ->setStyleSheet(css_radio_button_start);
        }
    }
    srand(time(0));
    k_arg = 2 + rand() % 2; //количество аргументов (2-5)
    int length = 1 << k_arg; //длина функции
    QString s = generateFunction(length);
    ui->label_5function->setText(s);
    for (int i = 1; i <= k_arg; i++) {
        int k = 1 << i; //2^n
        // Подсчет нулевой остаточной
        QString temp0 = "";
        QString temp1 = "";
        k = length / k;
        int step = 0;
        int limit = k;
        for (int j = 0; j < length / 2; j++) {
            temp0.append(s[step]);
            if (++step == limit) {
                step += k;
                limit += 2 * k;
            }
        }
        step = k;
        limit = k * 2;
        for (int j = 0; j < length / 2; j++) {
            temp1.append(s[step]);
            if (++step == limit) {
                step += k;
                limit += 2 * k;
            }
        }
        if (temp0 == temp1) {
            flags[i - 1] = 2;
        } else {
            flags[i - 1] = 1;
        }
        for (int i = k_arg + 1; i <= 5; i++) { //выключение ненужных переменных (кнопок)
            this->findChild <QGroupBox *> ("groupBox_" + QString::number(i))->setVisible(false);
        }
    }
}

void MainWindow::on_pushButton_start5_clicked() {
    if (!flag5) {
        flag5 = true;
        int x = 0;
        for (int i = 1; i <= k_arg; i++) {
            if (this->findChild <QRadioButton *> ("radioButton_" + QString::number(i) + "_" + QString::number(flags[i - 1]))->isChecked()) {
                x++;
            } else {
                int a = 0;
                a = (this->findChild <QRadioButton *> ("radioButton_" + QString::number(i) + "_1")->isChecked()) ? 1 : 2;
                this->findChild <QRadioButton *> ("radioButton_" + QString::number(i) + "_" + QString::number(a))->setEnabled(false);
                this->findChild <QRadioButton *> ("radioButton_" + QString::number(i) + "_" + QString::number(a))->setStyleSheet(
                    "QRadioButton "
                        "{"
                            "color: #ff6d69;"
                        "}"
                    "QRadioButton::indicator:checked "
                        "{"
                             "background-color: #ff6d69;"
                            "color: #ff6d69;"
                        "}"
                );
            }
            this->findChild <QRadioButton *> ("radioButton_" + QString::number(i) + "_" + QString::number(flags[i - 1]))->setEnabled(false);
            this->findChild <QRadioButton *> ("radioButton_" + QString::number(i) + "_" + QString::number(flags[i - 1]))
                    ->setStyleSheet(css_radio_button_green);
        }
        if (x == k_arg) {
            score5++;
            ui->menu5go->click();
        } else {
            ui->label_5_score->setText("Неверно! Ваш счет: " + QString::number(score5));
            score5 = 0;
            flag5 = true;
            ui->restart5->setVisible(true);
        }
    }
}

//6 задание
void MainWindow::on_menu6go_clicked() {
    ui->lineEdit_6input->setText("");
    ui->label_6_ans->setText("");
    ui->stackedWidget->setCurrentIndex(7); //из меню в 6 задание
    int k_arg = 2 + rand() % 2; //количество аргументов (2-5)
    QString s = generateFunction(1 << k_arg);
    std::string s_1 = s.toStdString();
    while(int(s_1.find("1")) == -1 || int(s_1.find("0")) == -1){
        s = generateFunction(1 << k_arg);
        s_1 = s.toStdString();
    }
    ui->label_6function->setText(s);
    ui->label_6_ans->setVisible(false);
    ui->restart6->setVisible(false);
}

void MainWindow::on_pushButton_start6_clicked() {
    QString function = ui->label_6function->text();
    int p = countOfArgs(function.size());
    QString user_s = ui->lineEdit_6input->text();
    std::string s = user_s.toStdString();
    bool flag_input = true;
    if(s == ""){
        ui->label_6_ans->setText("Неверный ввод");
        ui->label_6_ans->setVisible(true);
    } else {
        for (int i = 0; i < int(s.size()); i++) {
            if (s[i] != 'x' && s[i] != 'v' && s[i] != '&' && s[i] != '-' && s[i] != ' ' && (s[i] - '0' > p || s[i] - '0' < 1)) {
                ui->label_6_ans->setText("Неверный ввод");
                ui->label_6_ans->setVisible(true);
                ui->restart6->setVisible(false);
                flag_input = false;
                break;
            }
        }
        if (flag_input) {
            std::vector<std::string> v;
            //получаем вектор с элементами дизъюнкции
            while (int(s.find("v")) != -1) {
                v.push_back(s.substr(0, s.find("v") - 1));
                s.erase(0, s.find("v") + 2);
            }
            v.push_back(s);
            std::vector<std::vector<int>> a(v.size(), std::vector<int> (p, 0));
            /*получаем массив, заполненный по правилу: 1- переменная присутствует,
            2-отрицание переменной, 0- переменная отсутствует*/
            for (int i = 0; i < int(v.size()); i++) {
                v[i] = v[i] + "&";
                while (int(v[i].find("&")) != -1) {
                    int posC = v[i].find("&");
                    //проверка на отрицание переменной
                    if (v[i][posC - 3] == '-') {
                        a[i][v[i][posC - 1] - '1'] = 2;
                    } else {
                        a[i][v[i][posC - 1] - '1'] = 1;
                    }
                    v[i].erase(0, posC + 1);
                }
            }
            int m = 1 << p; // 2 в степени p
            std::vector<std::vector<int>> nabor;
            nabor = generateTable(m, p);
            bool flag = true;
            for (int i = 0; i < m; i++) {
                int f1 = 1, f2 = 0;
                for (int k = 0; k < int(a.size()); k++) {
                    f1 = 1;
                    for (int j = 0; j < p; j++) {
                        f1 &= (a[k][j] == 0) | ((3 - a[k][j] + nabor[i][j]) % 2);
                    }
                    f2 |= f1;
                }
                if (function[i].unicode() - '0' != f2) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                ui->label_6_ans->setVisible(true);
                ui->label_6_ans->setText("Ваш ответ верный!");
                ui->restart6->setVisible(true);
            } else {
                ui->label_6_ans->setVisible(true);
                QString ans = QString::fromStdString(minDNF(function.toStdString(), p));
                ui->label_6_ans->setText("Неверно! Один из возможных ответов: \n"+ans);
                ui->restart6->setVisible(true);
            }
        }
    }

}

//7 задание
void MainWindow::on_menu7go_clicked() {
    ui->lineEdit_7input->setText("");
    ui->label_7_ans->setText("");
    ui->stackedWidget->setCurrentIndex(8); //из меню в 7 задание
    k_arg = 2; //количество аргументов (2-5)
    QString s = generateFunction(1 << k_arg);
    std::string s_1 = s.toStdString();
    while(int(s_1.find("0")) == -1 || int(s_1.find("1")) == -1){
        s = generateFunction(1 << k_arg);
        s_1 = s.toStdString();
    }
    ui->label_7_function->setText(s);
    ui->label_7_ans->setVisible(false);
    ui->restart7->setVisible(false);
}

void MainWindow::on_pushButton_start7_clicked() {
    QString function = ui->label_7_function->text();
    int p = countOfArgs(function.size());
    QString user_s = ui->lineEdit_7input->text();
    std::string s = user_s.toStdString();
    bool flag_input = true;
    if(s == ""){
        ui->label_7_ans->setText("Неверный ввод");
        ui->label_7_ans->setVisible(true);
    } else {
        for (int i = 0; i < int(s.size()); i++) {
            if (s[i] != 'x' && s[i] != 'v' && s[i] != '&' && s[i] != '-' && s[i] != ' ' && s[i] != '(' && s[i] != ')' && (s[i] - '0' > p || s[i] - '0' < 1)) {
                ui->label_7_ans->setText("Неверный ввод");
                ui->label_7_ans->setVisible(true);
                ui->restart7->setVisible(false);
                flag_input = false;
                break;
            }
        }
        if (flag_input) {
            std::vector<std::string> v;
            //получаем вектор с элементами дизъюнкции
            while (int(s.find("&")) != -1) {
                v.push_back(s.substr(1, s.find("&") - 3));
                s.erase(0, s.find("&") + 2);
            }
            v.push_back(s.substr(1, s.length() - 2));
            std::vector<std::vector<int>> a(v.size(), std::vector<int> (p, 0));
            /*получаем массив, заполненный по правилу: 1- переменная присутствует,
            2-отрицание переменной, 0- переменная отсутствует*/
            for (int i = 0; i < int(v.size()); i++) {
                v[i] = v[i] + "v";
                while (int(v[i].find("v")) != -1) {
                    int posC = v[i].find("v");
                    //проверка на отрицание переменной
                    if (v[i][posC - 3] == '-') {
                        a[i][v[i][posC - 1] - '1'] = 2;
                    } else {
                        a[i][v[i][posC - 1] - '1'] = 1;
                    }
                    v[i].erase(0, posC + 1);
                }
            }
            int m = 1 << p; // 2 в степени p
            std::vector<std::vector<int>> nabor;
            nabor = generateTable(m, p);
            bool flag = true;
            for (int i = 0; i < m; i++) {
                int f1 = 0, f2 = 1;
                for (int k = 0; k < int(a.size()); k++) {
                    f1 = 0;
                    for (int j = 0; j < p; j++) {
                        f1 |= (a[k][j] != 0) & ((3 - a[k][j] + nabor[i][j]) % 2);
                    }
                    f2 &= f1;
                }
                if (function [i].unicode() - '0' != f2) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                ui->label_7_ans->setVisible(true);
                ui->label_7_ans->setText("Ваш ответ верный!");
                ui->restart7->setVisible(true);
            } else {
                ui->label_7_ans->setVisible(true);
                ui->label_7_ans->setText("Неверно!");
                ui->restart7->setVisible(true);
            }
        }
    }
}

//8 задание
void MainWindow::on_menu8go_clicked() {
    ui->lineEdit_8input->setText("");
    ui->label_8_function->setText("");
    ui->stackedWidget->setCurrentIndex(9); //из меню в 8 задание
}

void MainWindow::on_pushButton_start8_clicked() {
    QString s_user = ui->lineEdit_8input->text();
    std::string s = s_user.toStdString();

    std::vector<int> f;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        f.push_back(s[i] - '0');
    }
    int p = countOfArgs(n);
    if (functionIsRight(n, s)) {
        if (!(n && !(n & (n - 1))) || p < 2 || p > 5) {
            ui->label_8_function->setText("Неверный ввод. \nФункция должна состоять \nиз 2^n значений, n∈[2;5]");
        } else {
            bool flag_notNull = false;
            bool flag_notEd = false;
            for(int i = 0; i < int(f.size()); i++){
                if (f[i] == 1){
                    flag_notNull = true;    
                }
                if (f[i] == 0){
                    flag_notEd = true;
                }
            }
            if(flag_notNull && flag_notEd){
                int quan = 1 << p;
                std::string sdnf = "";
                int count = 0;
                for (int i = 0; i < quan; i++) {
                    if (f[i] == 1) {
                        std::string s = "";
                        int c = i;
                        for (int j = 0; j < p; j++) {
                            int bit = c & 1;
                            if (bit == 1) {
                                s = s.insert(0, "x" + std::to_string(p - j) + "&");
                            } else {
                                s = s.insert(0, "-x" + std::to_string(p - j) + "&");
                            }
                            c = c >> 1;
                        }
                        s.replace(s.length() - 1, 1, "");
                        sdnf = sdnf + s + " v ";
                        if (++count %3 == 0){
                            sdnf += "\nv ";
                        }
                    }
                }
                if (count %3 == 0){
                    sdnf.replace(sdnf.length()-3 , 3, "");
                }
                sdnf.replace(sdnf.length()-3 , 3, "");
                ui->label_8_function->setText(QString::fromStdString(sdnf));
            } else if (!flag_notEd){
                ui->label_8_function->setText("1");
            } else{
                ui->label_8_function->setText("СДНФ не существует");
            }
        }
    } else {
        ui->label_8_function->setText("Неверный ввод. \nВектор должен состоять из 0 и 1");
    }
}

// 9 задание
void MainWindow::on_menu9go_clicked()
{
    ui->lineEdit_9input->setText("");
    ui->label_9_function->setText("");
    ui->stackedWidget->setCurrentIndex(10); //из меню в 9 задание
}

void MainWindow::on_pushButton_start9_clicked()
{
    QString s_user = ui->lineEdit_9input->text();
    std::string s = s_user.toStdString();
    std::vector<int> f;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        f.push_back(s[i] - '0');
    }
    int p = countOfArgs(n);
    if (functionIsRight(n, s)) {
        if (!(n && !(n & (n - 1))) || p < 2 || p > 5) {
            ui->label_9_function->setText("Неверный ввод. \nФункция должна состоять \nиз 2^n значений, n∈[2;5]");
        } else {
            bool flag_notEd = false;
            bool flag_notNull = false;
            for(int i = 0; i < int(f.size()); i++){
                if (f[i] == 0){
                    flag_notEd = true;
                }
                if (f[i] == 1){
                    flag_notNull = true;
                }
            }
            if(flag_notEd && flag_notNull){
                int quan = 1 << p;
                std::string sknf = "";
                int count = 0;
                for (int i = 0; i < quan; i++) {
                    if (f[i] == 0) {
                        std::string s = "";
                        int c = i;
                        for (int j = 0; j < p; j++) {
                            int bit = c & 1;
                            if (bit == 0) {
                                s = s.insert(0, "x" + std::to_string(p - j) + "v");
                            } else {
                                s = s.insert(0, "-x" + std::to_string(p - j) + "v");
                            }
                            c = c >> 1;
                        }
                        s.replace(s.length() - 1, 1, ")");
                        s="("+s;
                        sknf = sknf + s + " & ";
                        if (++count %3 == 0){
                            sknf += "\n& ";
                        }
                    }
                }
                if (count %3 == 0){
                    sknf.replace(sknf.length()-3 , 3, "");
                }
                sknf.replace(sknf.length()-3 , 3, "");
                ui->label_9_function->setText(QString::fromStdString(sknf));
            } else if (!flag_notNull) {
                ui->label_9_function->setText("0");
            } else {
                ui->label_9_function->setText("СКНФ не существует");
            }
        }
    } else {
        ui->label_9_function->setText("Неверный ввод. \nВектор должен состоять из 0 и 1");
    }
}

// 10 задание
std::vector<bool> ans_10(5,0);
int k_arg_10 = 5;
int score10 = 0;
bool flag10 = false;
void MainWindow::on_menu10go_clicked()
{
    if (flag10) {
        flag10 = false;
    }
    for (int i = 0; i < 5; i++) {
        ans_10[i] = false;
    }
    ui->label_10_score->setText("");
    ui->label_10_function->setText("");
    ui->stackedWidget->setCurrentIndex(11); //из меню в 10 задание
    ui->restart10->setVisible(false);
    ui->label_10_score->setVisible(false);

    for(int i = 0; i < 5; i++){
        this->findChild <QCheckBox *> ("checkBox_10_" + QString::number(i))->setChecked(false);
        this->findChild <QCheckBox *> ("checkBox_10_" + QString::number(i))->setEnabled(true);
        this->findChild <QCheckBox *> ("checkBox_10_" + QString::number(i))->setStyleSheet(css_checkbox_start);
    }

    srand(time(0));
    k_arg_10 = 2 + rand() % 2; //количество аргументов (2-5)
    int length = 1 << k_arg_10; //длина функции
    QString s_r = generateFunction(length);
    ui->label_10_function->setText(s_r);

    std::string s = s_r.toStdString();

    ans_10[0] = isT0(s);
    ans_10[1] = isT1(s);
    ans_10[2] = isMon(s, k_arg_10);
    ans_10[3] = isLin(s);
    ans_10[4] = isSamodv(s);
    qDebug() << ans_10[0] << ans_10[1] << ans_10[2] << ans_10[3] << ans_10[4];
}

void MainWindow::on_pushButton_start10_clicked()
{
    if (!flag10) {
        flag10 = true;
        int x = 0;
        for(int i = 0; i < 5; i++){
            bool a = false;
            a = (this->findChild <QCheckBox *> ("checkBox_10_" + QString::number(i))->isChecked()) ? true : false;
            if(a == ans_10[i]){
                x++;
            }
        }
        qDebug() << x << " " << k_arg_10;
        if (x == 5) {
            score10++;
            ui->menu10go->click();
        } else {
            for(int i = 0; i < 5; i++){
                if(ans_10[i] == true){
                    this->findChild <QCheckBox *> ("checkBox_10_" + QString::number(i))->setStyleSheet(css_checkbox_green);
                }
                this->findChild <QCheckBox *> ("checkBox_10_" + QString::number(i))->setEnabled(false);
            }
            ui->label_10_score->setText("Неверно! Ваш счет: " + QString::number(score10));
            ui->label_10_score->setVisible(true);
            score10 = 0;
            flag10 = true;
            ui->restart10->setVisible(true);
        }
    }
}

//11 задание
std::vector<bool> ans_11(5,0);
int k_arg_11 = 5;
int k_f_11 = 5;
int score11 = 0;
bool flag11 = false;
bool flag11_full = true;
void MainWindow::on_menu11go_clicked()
{
    if (flag11) {
        flag11 = false;
    }
    flag11_full = true;
    for (int i = 0; i < 5; i++) {
        ans_11[i] = false;
    }
    ui->label_11_score->setText("");
    ui->label_11_function->setText("");
    ui->stackedWidget->setCurrentIndex(12); //из меню в 11 задание
    ui->restart11->setVisible(false);
    ui->label_11_score->setVisible(false);
    ui->radioButton_11_yes->setChecked(true);
    ui->radioButton_11_yes->setEnabled(true);
    ui->radioButton_11_no->setEnabled(true);

    for(int i = 0; i < 5; i++){
        this->findChild <QCheckBox *> ("checkBox_11_" + QString::number(i))->setChecked(false);
        this->findChild <QCheckBox *> ("checkBox_11_" + QString::number(i))->setEnabled(true);
        this->findChild <QCheckBox *> ("checkBox_11_" + QString::number(i))->setVisible(false);
        this->findChild <QCheckBox *> ("checkBox_11_" + QString::number(i))->setStyleSheet(css_checkbox_start);
    }
    ui->radioButton_11_yes->setStyleSheet(css_radio_button_start);
    ui->radioButton_11_no->setStyleSheet(css_radio_button_start);

    srand(time(0));
    k_f_11 = 2 + rand() % 4; //количество функций (2-5)
    std::vector<std::string> f;
    for(int i = 0; i < k_f_11; i++){
        k_arg_11 = 2; //количество аргументов (2-5)
        int length = 1 << k_arg_11; //длина функции
        QString s_r = generateFunction(length);
        std::string s = s_r.toStdString();
        f.push_back(s);
    }
    std::vector<int> count(5, 0);
    for(int i = 0; i < int(f.size()); i++){
        count[0] += isT0(f[i]);
        count[1] += isT1(f[i]);
        count[2] += isMon(f[i], countOfArgs(f[i].size()));
        count[3] += isLin(f[i]);
        count[4] += isSamodv(f[i]);
    }
    for(int i = 0; i < 5; i++){
        if (count[i] == int(f.size())){
            flag11_full = false;
            ans_11[i] = true;
        }
    }
    for(int i = 0; i < int(f.size()); i++){
        f[i] += "\n";
    }
    std::string s_label = "";
    for(int i = 0; i < int(f.size()); i++){
        s_label += f[i] + "\n";
    }
    s_label = (s_label.substr(0, s_label.length() - 2));
    ui->label_11_function->setText(QString::fromStdString(s_label));
    qDebug() << ans_11[0] << ans_11[1] << ans_11[2] << ans_11[3] << ans_11[4];
}

void MainWindow::on_pushButton_start11_clicked()
{
    if (!flag11) {
        flag11 = true;
        int x = 0;
        if(!flag11_full){
            for(int i = 0; i < 5; i++){
                bool a = false;
                a = (this->findChild <QCheckBox *> ("checkBox_11_" + QString::number(i))->isChecked()) ? true : false;
                if(a == ans_11[i]){
                    x++;
                }
            }
        }
        qDebug() << flag11_full << ui->radioButton_11_yes->isChecked() << x;
        if (x == 5 || (flag11_full && ui->radioButton_11_yes->isChecked())) {
            score11++;
            ui->menu11go->click();
        } else {
            if(flag11_full){//набор полный
                ui->radioButton_11_yes->setStyleSheet(css_radio_button_green);
            } else { //набор неполный
                for(int i = 0; i < 5; i++){
                    this->findChild <QCheckBox *> ("checkBox_11_" + QString::number(i))->setVisible(true);
                    if(ans_11[i] == true){
                        this->findChild <QCheckBox *> ("checkBox_11_" + QString::number(i))->setStyleSheet(css_checkbox_green);
                    }
                }
                ui->radioButton_11_no->setStyleSheet(css_radio_button_green);
            }
            for(int i = 0; i < 5; i++){
                this->findChild <QCheckBox *> ("checkBox_11_" + QString::number(i))->setEnabled(false);
            }
            ui->radioButton_11_yes->setEnabled(false);
            ui->radioButton_11_no->setEnabled(false);
            ui->label_11_score->setText("Неверно! Ваш счет: " + QString::number(score11));
            ui->label_11_score->setVisible(true);
            score11 = 0;
            flag11 = true;
            ui->restart11->setVisible(true);
        }
    }
}

void MainWindow::on_radioButton_11_no_clicked()
{
    for(int i = 0; i < 5; i++){
        this->findChild <QCheckBox *> ("checkBox_11_" + QString::number(i))->setVisible(true);
        this->findChild <QCheckBox *> ("checkBox_11_" + QString::number(i))->setChecked(false);
    }
}

void MainWindow::on_radioButton_11_yes_clicked()
{
    for(int i = 0; i < 5; i++){
        this->findChild <QCheckBox *> ("checkBox_11_" + QString::number(i))->setVisible(false);
    }
}

//12 задание
void MainWindow::on_menu12go_clicked()
{
    ui->lineEdit_12input->setText("");
    ui->label_12_function->setText("");
    ui->stackedWidget->setCurrentIndex(13); //из меню в 12 задание
}

void MainWindow::on_pushButton_start12_clicked()
{
    QString s_user = ui->lineEdit_12input->text();
    std::string s = s_user.toStdString();
    int n = s_user.size();
    int k_args = countOfArgs(n);
    if (functionIsRight(n, s)) {
        if (!(n && !(n & (n - 1))) || k_args < 2 || k_args > 5) {
            ui->label_12_function->setText("Неверный ввод. \nФункция должна состоять \nиз 2^n значений, n∈[2;5]");
        } else {
            bool flag_null = true; //проверка нулевой вектор
            bool flag_ed = true; //проверка единичный вектор
            for(int i = 0; i < int(s.size()); i++){
                if (s[i] == '1'){
                    flag_null = false;
                }
                if (s[i] == '0'){
                    flag_ed = false;
                }
            }
            if(flag_null) {
                ui->label_12_function->setText("ДНФ не существует");
            } else if(flag_ed) {
                ui->label_12_function->setText("1");
            } else {
                s_user = QString::fromStdString(minDNF(s, k_args));
                ui->label_12_function->setText(s_user);
            }
        }
        } else {
            ui->label_12_function->setText("Неверный ввод. \nФункция должна состоять из 0 и 1");
        }
}

// возвращение в меню
void MainWindow::on_menu_clicked() {
    ui->stackedWidget->setCurrentIndex(1);
    score5 = 0;
    score10 = 0;
    score11 = 0;
}

// главная страница
void MainWindow::on_play_clicked() {
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_menu_exit_clicked() {
    ui->stackedWidget->setCurrentIndex(0);
}
