/* 

Неделя 1. 10.02.2020

*/

#include <iostream>

using namespace std;

double Func_1(double x) {
    double y = pow((x + 1), 2) + 3 * (x + 1);
    return y;
}

double Func_3(double x, double y, double z) {
    return ((x * 2) + (y - 3) + (pow(z, 2)))/3;
}

double Func_5_lengthTo(double length, int from, int to) {
       /*
       The Converter for length.
       from - selected type value(1 - meter
                                  2 - verst
                                  3 - kilometer)

       to - to convert type value(1 - meter
                                  2 - verst
                                  3 - kilometer)
       */

    switch (from) {

    case 1://from met
        switch (to) {
        case 1: //met
            cout << "Error: to convert from one value to equivalent";
            break;
        case 2: //verst
            return length / 100 * 1066.8;
            break;
        case 3: //kilomet
            return length / 1000;
            break;
        }
        break;

    case 2: // from verst
        switch (to) {
        case 1: //met
            return length * 1066.8;
            break;
        case 2: //verst
            cout << "Error: to convert from one value to equivalent";
            break;
        case 3: //kilomet
            return (length * 1066.8) / 1000;
            break;
        }
        break;

    case 3: // from kilomet
        switch (to) {
        case 1: //met
            return length * 1000;
            break;
        case 2: //verst
            return (length * 1000) / 1066.8;
            break;
        case 3: //kilomet
            cout << "Error: to convert from one value to equivalent";
            break;
        }
        break;

    }   // The End of Big Switch!
}

double Func_5_VolumeTo(double volume, int from, int to) {
    /*
    The Converter for volume.
    from - selected type value(1 - liters
                               2 - cubes
                               3 - barrels)

    to - to convert type value(1 - liters
                               2 - cubes
                               3 - barrels)
    */

    switch (from) {

    case 1://from liters
        switch (to) {
        case 1: //liters
            cout << "Error: to convert from one value to equivalent";
            break;
        case 2: //cubes
            return volume * 0.001;
            break;
        case 3: //barrels
            return volume * 0.00628981077043211;
            break;
        }
        break;

    case 2: // from cubes
        switch (to) {
        case 1: //liters
            return volume / 1000;
            break;
        case 2: //cubes
            cout << "Error: to convert from one value to equivalent";
            break;
        case 3: //barrels
            return volume * 6.289810770432;
            break;
        }
        break;

    case 3: // from barrels
        switch (to) {
        case 1: //liters
            return volume * 158.987294928;
            break;
        case 2: //cubes
            return volume * 158.987294928;
            break;
        case 3: //barrels
            cout << "Error: to convert from one value to equivalent";
            break;
        }
        break;

    }   // The End of Big Switch!
}

double Func_5_AreaTo(double area, int from, int to) {
    /*
    The Converter for area.
    from - selected type value(1 - meters
                               2 - hectares
                               3 - acre)

    to - to convert type value(1 - meters
                               2 - hectares
                               3 - acre)
    */

    switch (from) {

    case 1://from meters
        switch (to) {
        case 1: //meters
            cout << "Error: to convert from one value to equivalent";
            break;
        case 2: //hectares
            return area * 0.0001;
            break;
        case 3: //acre
            return area * 0.000247105;
        }
        break;

    case 2: // from hectares
        switch (to) {
        case 1: //meters
            return area * 10000;
            break;
        case 2: //hectares
            cout << "Error: to convert from one value to equivalent";
            break;
        case 3: //acre
            return area * 2.47105;
            break;
        }
        break;

    case 3: // from acre
        switch (to) {
        case 1: //meters
            return area * 4046.86;
            break;
        case 2: //hectares
            return area * 0.40468599998211;
            break;
        case 3: //acre
            cout << "Error: to convert from one value to equivalent";
            break;
        }
        break;

    }   // The End of Big Switch!
}

double Func_5_TemperatureTo(double temperature, int from, int to) {
    /*
    The Converter for temperature.
    from - selected type value(1 - Celcius
                               2 - Kelvin
                               3 - Fahrenheit)

    to - to convert type value(1 - Celcius
                               2 - Kelvin
                               3 - Fahrenheit)
    */

    switch (from) {

    case 1://from Celcius
        switch (to) {
        case 1: //Celcius
            cout << "Error: to convert from one value to equivalent";
            break;
        case 2: //Kelvin
            return temperature + 273.15;
            break;
        case 3: //Fahrenheit
            return (temperature * 9.5) + 32;
        }
        break;

    case 2: // from Kelvin
        switch (to) {
        case 1: //Celcius
            return temperature - 273.15;
            break;
        case 2: //Kelvin
            cout << "Error: to convert from one value to equivalent";
            break;
        case 3: //Fahrenheit
            return (temperature - 273.15) * 9 / 5 + 32;
            break;
        }
        break;

    case 3: // from Fahrenheit
        switch (to) {
        case 1: //Celcius
            return (temperature - 32) * 5 / 9;
            break;
        case 2: //Kelvin
            return (temperature - 32) * 5 / 9 + 273.15;
            break;
        case 3: //Fahrenheit
            cout << "Error: to convert from one value to equivalent";
            break;
        }
        break;

    }   // The End of Big Switch!
}

double Func_5_KitchenMeasureTo(double kitchen, int from, int to) {
    /*
    The Converter for kitchen measure.
    from - selected type value(1 - tea spoon
                               2 - tablespoon
                               3 - cup)

    to - to convert type value(1 - tea spoon
                               2 - tablespoon
                               3 - cup)
    */

    switch (from) {

    case 1://from tea spoon
        switch (to) {
        case 1: //tea spoon
            cout << "Error: to convert from one value to equivalent";
            break;
        case 2: //tablespoon
            return (kitchen * 5) / 15;
            break;
        case 3: //cup
            return (kitchen * 5) / 240;
        }
        break;

    case 2: // from tablespoon
        switch (to) {
        case 1: //tea spoon
            return (kitchen * 15) / 5;
            break;
        case 2: //tablespoon
            cout << "Error: to convert from one value to equivalent";
            break;
        case 3: //cup
            return (kitchen * 15) / 240;
            break;
        }
        break;

    case 3: // from cup
        switch (to) {
        case 1: //tea spoon
            return (kitchen * 240) / 5;
            break;
        case 2: //tablespoon
            return (kitchen * 240) / 15;
            break;
        case 3: //cup
            cout << "Error: to convert from one value to equivalent";
            break;
        }
        break;

    }   // The End of Big Switch!
}

double Func_6_CostCandyCookie(double costCandy, double costCookie, double WeightCandy, double WeightCookie) {
    double SweetCost = costCandy* WeightCandy + costCookie * WeightCookie;
    return SweetCost;
}



int main()
{
    setlocale(LC_ALL, "ru");
    
    //Задание 1

    // 1
    cout << "Задание 1" << "\n";
    cout << (Func_1(1.7)), // 15.39
    cout << "\n",
    cout << (Func_1(3)); // 28
    cout << "\n" << "\n";

    // 2
    int n, b;

    cout << "Задание 2" << "\n";
    cout << "Введите число: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Четное";
    }
    else {
        cout << "Нечетное";
    }
    cout << "\n" << "\n";

    // 3
    double q, w, e;

    cout << "Задание 3" << "\n";

    cout << "Введите 1 параметр: ";
    cin >> q;
    cout << "Введите 2 параметр: ";
    cin >> w;
    cout << "Введите 3 параметр: ";
    cin >> e;

    cout << Func_3(q, w, e);
    cout << "\n" << "\n";

    //4
    cout << "Задание 4" << "\n";

    double r, t, y;

    cout << "Введите 1 параметр: ";
    cin >> r;
    cout << "Введите 2 параметр: ";
    cin >> t;
    cout << "Введите 3 параметр: ";
    cin >> y;

    cout << "Седнее арефметическое: ";
    cout << (r + t + y) / 3;
    cout << "\n";
    cout << "Разность удвоенной суммы первого и третьего чисел и утроенного второго числа: ";
    cout << (r * 2 - y * 2 - t * 3);
    cout << "\n" << "\n";

    //5
    cout << "Задание 5" << "\n";
    cout << "Конвертер величин." << "\n";
    double a;   //

    cout << "Введите число: ";
    cin >> a;            // input value

    //////////////////length///////////////
    cout << "\n" << "Converte the length" << "\n";
    cout << "Длина" << "\n";
    cout << "метры: " << "\n";
    cout << "\t" << "версты: " << Func_5_lengthTo(a, 1, 2) << "\n";
    cout << "\t" << "километры: " << Func_5_lengthTo(a, 1, 3) << "\n";

    cout << "версты: " << "\n";
    cout << "\t" << "метры: " << Func_5_lengthTo(a, 2, 1) << "\n";
    cout << "\t" << "километры: " << Func_5_lengthTo(a, 2, 3) << "\n";

    cout << "километры: " << "\n";
    cout << "\t" << "метры: " << Func_5_lengthTo(a, 3, 1) << "\n";
    cout << "\t" << "версты: " << Func_5_lengthTo(a, 3, 2) << "\n";

    //////////////////volume///////////////
    cout << "\n" << "Converte the volume" << "\n";

    cout << "Введите число: ";
    cin >> a;            // input value

    cout << "Объем" << "\n";
    cout << "литры: " << "\n";
    cout << "\t" << "кубы: " << Func_5_VolumeTo(a, 1, 2) << "\n";
    cout << "\t" << "акры: " << Func_5_VolumeTo(a, 1, 3) << "\n";

    cout << "кубы: " << "\n";
    cout << "\t" << "литры: " << Func_5_VolumeTo(a, 2, 1) << "\n";
    cout << "\t" << "баррели: " << Func_5_VolumeTo(a, 2, 3) << "\n";

    cout << "баррели: " << "\n";
    cout << "\t" << "литры: " << Func_5_VolumeTo(a, 3, 1) << "\n";
    cout << "\t" << "кубы: " << Func_5_VolumeTo(a, 3, 2) << "\n";

    //////////////////area///////////////
    cout << "\n" << "Converte the area" << "\n";

    cout << "Введите число: ";
    cin >> a;            // input value

    cout << "Площадь" << "\n";
    cout << "Метры: " << "\n";
    cout << "\t" << "гектары: " << Func_5_AreaTo(a, 1, 2) << "\n";
    cout << "\t" << "акры: " << Func_5_AreaTo(a, 1, 3) << "\n";

    cout << "Гектары: " << "\n";
    cout << "\t" << "метры: " << Func_5_AreaTo(a, 2, 1) << "\n";
    cout << "\t" << "акры: " << Func_5_AreaTo(a, 2, 3) << "\n";

    cout << "Акры: " << "\n";
    cout << "\t" << "метры: " << Func_5_AreaTo(a, 3, 1) << "\n";
    cout << "\t" << "гектары: " << Func_5_AreaTo(a, 3, 2) << "\n";

    //////////////////Temperature///////////////
    cout << "\n" << "Converte the Temperature" << "\n";

    cout << "Введите число: ";
    cin >> a;            // input value

    cout << "Температура " << "\n";
    cout << "цельсий: " << "\n";
    cout << "\t" << "кельвины: " << Func_5_TemperatureTo(a, 1, 2) << "\n";
    cout << "\t" << "фаренгейты: " << Func_5_TemperatureTo(a, 1, 3) << "\n";

    cout << "кельвины: " << "\n";
    cout << "\t" << "цельсий: " << Func_5_TemperatureTo(a, 2, 1) << "\n";
    cout << "\t" << "фаренгейты: " << Func_5_TemperatureTo(a, 2, 3) << "\n";

    cout << "фаренгейты: " << "\n";
    cout << "\t" << "цельсий: " << Func_5_TemperatureTo(a, 3, 1) << "\n";
    cout << "\t" << "кельвины: " << Func_5_TemperatureTo(a, 3, 2) << "\n";

    //////////////////Cookery///////////////
    cout << "\n" << "Converte the kitchen measure" << "\n";

    cout << "Введите число: ";
    cin >> a;            // input value

    cout << "Кулинария " << "\n";
    cout << "Чайная ложка: " << "\n";
    cout << "\t" << "Столовая ложка: " << Func_5_KitchenMeasureTo(a, 1, 2) << "\n";
    cout << "\t" << "Чашка: " << Func_5_KitchenMeasureTo(a, 1, 3) << "\n";

    cout << "Столовая ложка: " << "\n";
    cout << "\t" << "Чайная ложка: " << Func_5_KitchenMeasureTo(a, 2, 1) << "\n";
    cout << "\t" << "Чашка: " << Func_5_KitchenMeasureTo(a, 2, 3) << "\n";

    cout << "Чашка: " << "\n";
    cout << "\t" << "Чайная ложка: " << Func_5_KitchenMeasureTo(a, 3, 1) << "\n";
    cout << "\t" << "Столовая ложка: " << Func_5_KitchenMeasureTo(a, 3, 2) << "\n";


    //6

    //input cost candy
    cout << "Цена 1 кг.: ";
    cout << "конфет: ";
    cin >> a;
    //input cost cookie 
    cout << "печенье: ";
    cin >> b;

    //а) одной покупки из 300 г конфет и 400 г печенья
    cout << "Цена одной покупки из 300 г конфет и 400 г печенья" << Func_6_CostCandyCookie(a, b, 0.300, 0.400);

    //б) трех покупок, каждая из 2 кг печенья и 1 кг 800 г конфет.
    cout << "Цена трех покупок, каждая из 2 кг печенья и 1 кг 800 г конфет."
        << 3 * Func_6_CostCandyCookie(a, b, 2, 1.8);


    return 0;
}

