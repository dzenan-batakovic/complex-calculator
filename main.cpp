#include <iostream>
#include <math.h>
#include <iostream>
#include <windows.h>
#include <unistd.h>
#include <limits>
#include <iomanip>

// Global var
const long double pi = 3.14159265358979323846;
const double G = 6.6743e-11;


#define RESET "\e[0m" // Resets colors to default

// REGULAR TEXT COLOR
#define RED_TXT "\e[0;31m" // Regular Red
#define GREEN_TXT "\e[0;32m" // Regular Green
#define BLUE_TXT "\e[0;34m" // Regular Blue
#define CYAN_TXT "\e[0;36m" // Regular Cyan
#define WHITE_TXT "\e[0;37m" // Regular White


// BOLD TEXT COLOR
#define BOLD_RED "\e[1;31m" // Bold Red
#define BOLD_BLUE "\e[1;34m" // Bold Blue
#define BOLD_GREEN "\e[1;32m" // Bold Green
#define BOLD_PURPLE "\e[1;35m" // Bold Purple

// BACKGROUD COLOR
#define BKG_RED "\e[41m" // Background Red
#define BKG_GREEN "\e[42m" // Background Green
#define BKG_BLUE "\e[44m" // Background Blue
#define BKG_WHITE "\e[47m" // Background White

// HIGH INTENSITY BOLD COLOR
#define HIGH_BOLD_RED "\e[1;91m"
#define HIGH_BOLD_GREEN "\e[1;92m"

/*====== ====== ======*/

/* === Class Start === */

// Class 1
class Calculator
{
private: // Private part of class
  double calcRadian(double deg)
  {
    return deg * (pi / 180);
  }

  double calcSum(double a, double b)
  {
    return a + b;
  }

  double calcSub(double a, double b)
  {
    return a - b;
  }

  double calcMulti(double a, double b)
  {
    return a * b;
  }

  double calcDiv(double a, double b)
  {
    return a / b;
  }

  double calcVx(double v, double a)
  {
    return v * cos(calcRadian(a));
  }

  double calcVy(double v, double a) {
    return v * sin(calcRadian(a));
  }

  // Public part of class
public:
  double sum(double digit_1, double digit_2)
  {
    return calcSum(digit_1, digit_2);
  }

  double sub(double digit_1, double digit_2)
  {
    return calcSub(digit_1, digit_2);
  }

  double multi(double digit_1, double digit_2)
  {
    return calcMulti(digit_1, digit_2);
  }

  double div(double digit_1, double digit_2)
  {
    return calcDiv(digit_1, digit_2);
  }

  double Vx(double vel, double ang)
  {
    return calcVx(vel, ang);
  }

  double Vy(double vel, double ang) {
    return calcVy(vel, ang);
  }
};

/* ===== Class End =====*/

/* === Function Start === */

void clearScreen()
{
#ifdef _WIN32
  system("CLS");
#else
  system("CLEAR");
#endif
}

void pauseScreen()
{
#ifdef _WIN32
  system("PAUSE");
#else
  std::cout << "Press Enter to continue...";
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::cin.get();
#endif
}

/* ===== Function End =====*/

/* === Getter Start === */

/* ===== Getter End ===== */

// Program Start
int main()
{
  clearScreen();
  // Enabling special character use
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);

  // Loop declaration
  Calculator defCalc;
  Calculator aerospaceCalc;
  int choice;
  while (true)
  {
    std::cout << "=== " << BLUE_TXT << "Calculator App" << RESET << " ===\n";
    std::cout << "1. Normal operations\n";
    std::cout << "2. Aerospace operations\n";
    std::cout << "3. Exit\n";
    std::cout << "[INPUT]: ";
    std::cin >> choice;

    std::cin.ignore(1000, '\n');

    if (choice == 1)
    {
      clearScreen(); // Clears the screen
      bool defSubMenu = true;

      while (defSubMenu)
      {
        char subChoice;

        char *pSubChoice = &subChoice;

        std::cout << "=== " << CYAN_TXT << "Regular Calculator" << RESET << " ===\n";
        std::cout << "1. Add up\n";
        std::cout << "2. Subtract\n";
        std::cout << "3. Multiply\n";
        std::cout << "4. Divide\n";
        std::cout << "0. Back\n";
        std::cout << "[INPUT]: ";
        std::cin >> *pSubChoice;

        std::cin.ignore(1000, '\n');

        switch (*pSubChoice)
        {


        case '1':
        {
          clearScreen(); // Clears the screen
          double digit_1, digit_2, result;

          double *pDigit_1 = &digit_1;
          double *pDigit_2 = &digit_2;
          double *pResult = &result;

          std::cout << BLUE_TXT << "Enter first digit: " << RESET;
          std::cin >> *pDigit_1;
          std::cout << BLUE_TXT << "Enter second digit: " << RESET;
          std::cin >> *pDigit_2;

          *pResult = defCalc.sum(*pDigit_1, *pDigit_2);

          std::cout << HIGH_BOLD_GREEN << "[RESULT]: " << *pResult << "\n" << RESET;

          pauseScreen();
          clearScreen();
          break;
        }



        case '2':
        {
          clearScreen();
          double digit_1, digit_2, result;

          double *pDigit_1 = &digit_1;
          double *pDigit_2 = &digit_2;
          double *pResult = &result;

          std::cout << BLUE_TXT << "Enter first number: " << RESET;
          std::cin >> *pDigit_1;
          std::cout << BLUE_TXT << "Enter second number: " << RESET;
          std::cin >> *pDigit_2;

          *pResult = defCalc.sub(*pDigit_1, *pDigit_2);

          std::cout << HIGH_BOLD_GREEN << "[RESULT]: " << *pResult << "\n" << RESET;
          pauseScreen();
          clearScreen();
          break;
        }



        case '3':
        {
          clearScreen();
          double digit_1, digit_2, result;

          double *pDigit_1 = &digit_1;
          double *pDigit_2 = &digit_2;
          double *pResult = &result;

          std::cout << BLUE_TXT << "Enter first number: " << RESET;
          std::cin >> *pDigit_1;
          std::cout << BLUE_TXT << "Enter second number: " << RESET;
          std::cin >> *pDigit_2;

          *pResult = defCalc.multi(*pDigit_1, *pDigit_2);

          std::cout << HIGH_BOLD_GREEN << "[RESULT]: " << *pResult << "\n" << RESET;
          pauseScreen();
          clearScreen();
          break;
        }



        case '4':
        {
          clearScreen();
          double digit_1, digit_2, result;

          double *pDigit_1 = &digit_1;
          double *pDigit_2 = &digit_2;
          double *pResult = &result;

          std::cout << BLUE_TXT << "Enter first number: " << RESET;
          std::cin >> *pDigit_1;
          std::cout << BLUE_TXT << "Enter second number: " << RESET;
          std::cin >> *pDigit_2;

          *pResult = defCalc.div(*pDigit_1, *pDigit_2);

          std::cout << HIGH_BOLD_GREEN << "[RESULT]: " << *pResult << "\n" << RESET;

          pauseScreen();
          clearScreen();
          break;
        }



        case '0':
        {
          std::cout << RED_TXT << "Going back..." << RESET;
          Sleep(500);
          defSubMenu = false;
          clearScreen();
          break;
        }



        default:
          std::cout << HIGH_BOLD_RED << "[ERROR]: Wrong input!\n" << RESET;
          pauseScreen();
          clearScreen();
          break;
        }
      }
    }
    // ========== END ==========

    else if (choice == 2)
    {
      bool aeroSubMenu = true;

      while (aeroSubMenu)
      {
        clearScreen();
        char secondChoice;

        char *pChoice = &secondChoice;

        std::cout << "=== " << CYAN_TXT << "Aerospace Calculator" << RESET << " ===\n";
        std::cout << "1. Calculate Vx\n";
        std::cout << "2. Calculate Vy\n";
        std::cout << "0. Exit\n";
        std::cout << "[INPUT]: ";
        std::cin >> *pChoice;

        std::cin.ignore(1000, '\n');

        switch (*pChoice)
        {

        case '1':
        {
          clearScreen();
          double velocity, angle, vx;

          double *pVelocity = &velocity;
          double *pAngle = &angle;
          double *pVx = &vx;

          std::cout << BLUE_TXT << "Enter velocity(m/s): " << RESET;
          std::cin >> *pVelocity;
          std::cout << BLUE_TXT << "\nEnter angle(°): " << RESET;
          std::cin >> *pAngle;
          std::cin.ignore(1000, '\n');

          *pVx = aerospaceCalc.Vx(*pVelocity, *pAngle);

          std::cout << HIGH_BOLD_GREEN << "[RESULT]: " << std::fixed << std::setprecision(7) << *pVx << "\n" << RESET;

          pauseScreen();

          clearScreen();

          break;
        }

        case '2':
        {
          clearScreen();
          double velocity, angle, vy;

          double *pVelocity = &velocity;
          double *pAngle = &angle;
          double *pVy = &vy;

          std::cout << BLUE_TXT << "Enter velocity(m/s): " << RESET;
          std::cin >> *pVelocity;
          std::cout << BLUE_TXT << "Enter angle(°): " << RESET;
          std::cin >> *pAngle;

          *pVy = aerospaceCalc.Vy(*pVelocity, *pAngle);

          std::cout << HIGH_BOLD_GREEN << "[RESULT]: " << std::fixed << std::setprecision(7) << *pVy << "\n" << RESET;

          pauseScreen();
          
          clearScreen();

          break;
        }

        case '0':
        {
          std::cout << RED_TXT << "Going back...\n" << RESET;
          Sleep(500);
          aeroSubMenu = false;
          clearScreen();
        }

        default:
          break;
        }
      }
    }

    else if (choice == 3)
    {
      std::cout << HIGH_BOLD_RED << "[EXITING]\n";
      std::cout << "3..\n";
      sleep(1);
      std::cout << "2...\n";
      sleep(1);
      std::cout << "1...\n" RESET;
      sleep(1);
      clearScreen();
      break;
    }

    else
    {
      std::cout << "Error!";
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      pauseScreen();
      clearScreen();
    }
  }

  return 0;
}