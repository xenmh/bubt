#include <stdio.h>

#define ROWS 3
#define COLS 5

void displaySeats(char seats[ROWS][COLS])
{
  printf("\nSeat Map:\n");

  for (int i = 0; i < ROWS; i++)
  {
    for (int j = 0; j < COLS; j++)
    {
      printf("%c ", seats[i][j]);
    }
    printf("\n");
  }
}

void reserveSeat(char seats[ROWS][COLS])
{
  int row, col;

  printf("Enter row (1-%d): ", ROWS);
  scanf("%d", &row);

  printf("Enter column (1-%d): ", COLS);
  scanf("%d", &col);

  // Validate input
  if (row < 1 || row > ROWS || col < 1 || col > COLS)
  {
    printf("Invalid row or column!\n");
    return;
  }

  // Convert to array index
  row--;
  col--;

  // Prevent duplicate reservation
  if (seats[row][col] == 'X')
  {
    printf("Seat is already reserved!\n");
  }
  else
  {
    seats[row][col] = 'X';
    printf("Seat reserved successfully!\n");
  }
}

void cancelReservation(char seats[ROWS][COLS])
{
  int row, col;

  printf("Enter row (1-%d): ", ROWS);
  scanf("%d", &row);

  printf("Enter column (1-%d): ", COLS);
  scanf("%d", &col);

  // Validate input
  if (row < 1 || row > ROWS || col < 1 || col > COLS)
  {
    printf("Invalid row or column!\n");
    return;
  }

  row--;
  col--;

  if (seats[row][col] == 'O')
  {
    printf("This seat is already available!\n");
  }
  else
  {
    seats[row][col] = 'O';
    printf("Reservation cancelled successfully!\n");
  }
}

int countAvailableSeats(char seats[ROWS][COLS])
{
  int count = 0;

  for (int i = 0; i < ROWS; i++)
  {
    for (int j = 0; j < COLS; j++)
    {
      if (seats[i][j] == 'O')
      {
        count++;
      }
    }
  }

  return count;
}

void findMaxAvailableRow(char seats[ROWS][COLS])
{
  int maxRow = 0;
  int maxAvailable = 0;

  for (int i = 0; i < ROWS; i++)
  {
    int count = 0;

    for (int j = 0; j < COLS; j++)
    {
      if (seats[i][j] == 'O')
      {
        count++;
      }
    }

    if (count > maxAvailable)
    {
      maxAvailable = count;
      maxRow = i;
    }
  }

  printf("Row %d has the maximum available seats: %d\n",
         maxRow + 1, maxAvailable);
}

int main()
{
  char seats[ROWS][COLS] = {
      {'O', 'O', 'O', 'O', 'O'},
      {'X', 'O', 'O', 'X', 'O'},
      {'O', 'X', 'O', 'O', 'O'}};

  int choice;

  do
  {
    printf("\n--- Seat Reservation System ---\n");
    printf("1. Display Seat Map\n");
    printf("2. Reserve a Seat\n");
    printf("3. Cancel Reservation\n");
    printf("4. Count Available Seats\n");
    printf("5. Find Row with Maximum Available Seats\n");
    printf("6. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      displaySeats(seats);
      break;

    case 2:
      reserveSeat(seats);
      break;

    case 3:
      cancelReservation(seats);
      break;

    case 4:
      printf("Available seats: %d\n",
             countAvailableSeats(seats));
      break;

    case 5:
      findMaxAvailableRow(seats);
      break;

    case 6:
      printf("Exiting program...\n");
      break;

    default:
      printf("Invalid choice!\n");
    }

  } while (choice != 6);

  return 0;
}
