import java.util.Scanner;

public class TicTacToeSum
{
        public static final int EMPTY=0;
        public static final int ODD=1;
        public static final int EVEN=2;

        public static final int PLAYING=0;
        public static final int DRAW=1;
        public static final int ODD_WON=2;
        public static final int EVEN_WON=3;

        public static final int ROWS=3,COLS=3;
        public static int[][] board = new int[ROWS][COLS];

        public static int currentState;

        public static int currentPlayer;
        public static int currntRow,currentCol;

        public static Scanner in=new Scanner(System.in);

	public static void main(String[] args)
        {
                initGame();

                do
                {
                        playerMove(currentPlayer);
                        updateGame(currentPlayer,currntRow,currentCol);
                        printBoard();

                        if (currentState == ODD_WON)
                        {
                                System.out.println("Player 1 won");
                        }
                        else if (currentState == EVEN_WON)
                        {
                                System.out.println("Player 2 won");
                        }
                        else if (currentState == DRAW)
                        {
                                System.out.println("It is a draw");
                        }

                        currentPlayer=(currentPlayer == ODD) ? EVEN : ODD;
                }
                while (currentState == PLAYING);
        }

        public static void initGame()
        {
                for (int i=0;i< ROWS;i++)
                {
                        for (int j=0;j<COLS;j++)
                        {
                                board[i][j]=EMPTY;
                        }
                }
                currentState = PLAYING;
                currentPlayer = ODD;
        }

	public static void playerMove(int theSeed)
        {
                boolean validInput = false;
                do
                {
                        if (theSeed == ODD)
                        {
                                System.out.print("Player 1 'ODD', enter your move (row[1-3] column[1-3]): ");
                        }
                        else
                        {
                                System.out.print("Player 2 'EVEN', enter your move (row[1-3] column[1-3]): ");
                        }

                        int row = in.nextInt() - 1;
                        int col = in.nextInt() - 1;
                        int input = in.nextInt();

                        if (row >= 0 && row < ROWS && col >= 0 && col < COLS && board[row][col] == EMPTY)
                        {
                                currntRow = row;
                                currentCol = col;
                                board[currntRow][currentCol] = theSeed;
                                validInput = true;
                        }
                        else
                        {
                                System.out.println("This move at (" + (row + 1) + "," + (col + 1) + ") is not valid. Try again...");
                        }

                } while (!validInput);
        }

        public static void updateGame(int theSeed, int currentRow, int currentCol)
        {
                if (hasWon(theSeed, currentRow, currentCol))
                {
                        currentState = (theSeed == ODD) ? ODD_WON : EVEN_WON;
                }
                else if (isDraw())
                {
                        currentState = DRAW;
                }
        }

	public static boolean isDraw()
        {
                for (int i=0;i<ROWS; ++i)
                {
                        for (int j=0;j<COLS;++j)
                        {
                                if (board[i][j] == EMPTY)
                                {
                                        return false;
                                }
                        }
                }
                return true;
        }

        public static boolean hasWon(int theSeed, int currentRow, int currentCol)
        {
                return (board[currentRow][0] == theSeed
                        && board[currentRow][1] == theSeed
                        && board[currentRow][2] == theSeed
                        || board[0][currentCol] == theSeed
                        && board[1][currentCol] == theSeed
                        && board[2][currentCol] == theSeed
                        || currentRow == currentCol
                        && board[0][0] == theSeed
                        && board[1][1] == theSeed
                        && board[2][2] == theSeed
                        || currentRow + currentCol == 2
                        && board[0][2] == theSeed
                        && board[1][1] == theSeed
                        && board[2][0] == theSeed);
        }

        public static void printBoard()
        {
                for (int i=0;i<ROWS;++i)
                {
                        for (int j=0;j<COLS;++j)
                        {
                                printCell(board[i][j]);
                                if (j!=COLS-1)
                                {
                                        System.out.print("|");
                                }
                        }
                        System.out.println();
                        if (i!=ROWS-1)
                        {
                                System.out.println("-----------");
                        }
                }
                System.out.println();
        }

        public static void printCell(int content)
        {
                switch (content)
                {
                        case EMPTY:
                          System.out.print("   ");
                          break;
                        case EVEN:
                          System.out.print(" " + in.nextInt() + " ");
                          break;
                        case ODD:
                          System.out.print(" " + in.nextInt() + " ");
                          break;
                }
        }
}
