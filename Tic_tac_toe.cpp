#include <iostream>
#include <map>

using namespace std;

void computer(char board[3][3]) {
  if (board[0][0] == '-' && board[0][1] == 'X' && board[0][2] == 'X') {
    board[0][0] = 'O';
  } else if (board[0][0] == 'X' && board[0][1] == '-' && board[0][2] == 'X') {
    board[0][1] = 'O';
  } else if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == '-') {
    board[0][2] = 'O';
  } else if (board[1][0] == '-' && board[1][1] == 'X' && board[1][2] == 'X') {
    board[1][0] = 'O';
  } else if (board[1][0] == 'X' && board[1][1] == '-' && board[1][2] == 'X') {
    board[1][1] = 'O';
  } else if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == '-') {
    board[1][2] = 'O';
  } else if (board[2][0] == '-' && board[2][1] == 'X' && board[2][2] == 'X') {
    board[2][0] = 'O';
  } else if (board[2][0] == 'X' && board[2][1] == '-' && board[2][2] == 'X') {
    board[2][1] = 'O';
  } else if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == '-') {
    board[2][2] = 'O';
  } else if (board[0][0] == '-' && board[1][0] == 'X' && board[2][0] == 'X') {
    board[0][0] = 'O';
  } else if (board[0][0] == 'X' && board[1][0] == '-' && board[2][0] == 'X') {
    board[1][0] = 'O';
  } else if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == '-') {
    board[2][0] = 'O';
  } else if (board[0][1] == '-' && board[1][1] == 'X' && board[2][1] == 'X') {
    board[0][1] = 'O';
  } else if (board[0][1] == 'X' && board[1][1] == '-' && board[2][1] == 'X') {
    board[1][1] = 'O';
  } else if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == '-') {
    board[2][1] = 'O';
  } else if (board[0][2] == '-' && board[1][2] == 'X' && board[2][2] == 'X') {
    board[0][2] = 'O';
  } else if (board[0][2] == 'X' && board[1][2] == '-' && board[2][2] == 'X') {
    board[1][2] = 'O';
  } else if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == '-') {
    board[2][2] = 'O';
  } else if (board[0][0] == '-' && board[1][1] == 'X' && board[2][2] == 'X') {
    board[0][0] = 'O';
  } else if (board[0][0] == 'X' && board[1][1] == '-' && board[2][2] == 'X') {
    board[1][1] = 'O';
  } else if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == '-') {
    board[2][2] = 'O';
  } else if (board[0][2] == '-' && board[1][1] == 'X' && board[2][0] == 'X') {
    board[0][2] = 'O';
  } else if (board[0][2] == 'X' && board[1][1] == '-' && board[2][0] == 'X') {
    board[1][1] = 'O';
  } else if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == '-') {
    board[2][0] = 'O';
  } else {
    while (true) {
      int x = (rand() % (3 - 0 + 1)) + 0;
      int y = (rand() % (3 - 0 + 1)) + 0;
      if (board[x][y] == '-') {
        board[x][y] = 'O';
        break;
      }
      cout << "x: " << x << ", y: " << y << endl;
    }
    cout << "Компьютер выполнил ход\n";
  }
}

int winner(char board[3][3]) {
  if ((board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') ||
      (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') ||
      (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')) {
    return 1;
  } else if ((board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') ||
             (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') ||
             (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O')) {
    return 2;
  }

  if ((board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') ||
      (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') ||
      (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X')) {
    return 1;
  } else if ((board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') ||
             (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') ||
             (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O')) {
    return 2;
  }

  if ((board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') ||
      (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')) {
    return 1;
  } else if ((board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') ||
             (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')) {
    return 1;
  }
  return 0;
}

void printBoard(char board[3][3]) {
  cout << "    1   2   3  \n";
  cout << "  -------------\n";
  for (int i = 0; i < 3; i++) {
    cout << i + 1 << " | ";
    for (int j = 0; j < 3; j++) {
      cout << board[i][j] << " | ";
    }
    cout << endl;
    cout << "  -------------\n";
  }
}

bool checkBoard(char board[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (board[i][j] == '-') {
        return true;
      }
    }
  }
  return false;
}

int main() {
  cout << "Добро пожаловать в игру - \"Крестики-нолики\"!\n \
		Против Вас играет компьютер.\n";

  char board[3][3] = {{'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'}};
  int row, col;  

  while (true) {
    printBoard(board);
    cout << "Ваш ход!\n";
    while (true) {
      cout << "Введите номер строки и столбца через пробел: ";
      cin >> row >> col;
      if (row > 0 && row < 4 && col > 0 && col < 4) {
        if (board[row - 1][col - 1] == '-') {
          board[row - 1][col - 1] = 'X';
          break;
        } else {
          cout << "Эта клетка уже занята!\n";
        }
      } else {
        cout << "Неверный ввод. Попробуйте еще раз.\n";
      }
    }
    printBoard(board);
    if (winner(board) == 1) {
      cout << "Вы выиграли!\n";
			return 0;
    }
		
		if (checkBoard(board)) {
      cout << "Ход компьютера...\n";
      computer(board);
    	if (winner(board) == 2) {
        cout << "Компьютер победил!\n";
				return 0;
      }
		} else {
      break;
		}
	}
	cout << "Ничья\n";
  return 0;
}