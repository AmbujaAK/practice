import java.util.Scanner;


public class TicTacToeNum
{

        public static final int EMPTY=0;
        public static final int PLAYER1=1;
        public static final int PLAYER2=2;

        public static final int PLAYING=0;
        public static final int DRAW=3;

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

                        if (currentState == PLAYER1)
                        {
                                System.out.println("Player 1 won");
                        }
                        else if (currentState == PLAYER2)
                        {
                                System.out.println("Player 2 won");
                        }
                        else if (currentState == DRAW)
                        {
                                System.out.println("It is a draw");
                        }

                        currentPlayer=(currentPlayer == PLAYER1) ? PLAYER2 : PLAYER1;
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
                currentPlayer = PLAYER1;
        }

	public static void playerMove(int theSeed)
        {
                boolean validInput = false;
                do
                {
                        if (theSeed == PLAYER1)
                        {
                                System.out.print("Player 1, enter your move (row[1-3] column[1-3]): ");
                        }
                        else
                        {
                                System.out.print("Player 2, enter your move (row[1-3] column[1-3]): ");
                        }

                        int row = in.nextInt() - 1;
                        int col = in.nextInt() - 1;

                        if (row >= 0 && row < ROWS && col >= 0 && col < COLS && board[row][col] == EMPTY)
                        {
                                currntRow = row;
                                currentCol = col;

				do
				{
					if(theSeed == PLAYER1)
					{
						System.out.print("Enter odd number (1,3,5,7,9) which is not entered before: ");
					}
					else
					{
						System.out.print("Enter even number (2,4,6,8) which is not entered before: ");
					}

					int num = in.nextInt();
			
					if ((theSeed == PLAYER1 && num>0 && num<10 && num%2 == 1 && !check(num))
						|| (theSeed == PLAYER2 && num>0 && num<10 && num%2 == 0 && !check(num)))
					{
						board[currntRow][currentCol] = num;
						validInput = true;
					}
					else 
					{
						System.out.println("Enter valid number. Try agaim...");
					}
				}while(!validInput);
                        }
                        else
                        {
                                System.out.println("This move at (" + (row + 1) + "," + (col + 1) + ") is not valid. Try again...");

                        }
                } while (!validInput);
        }

        public static void updateGame(int theSeed, int currentRow, int currentCol)
        {
                if (hasWon(currentRow, currentCol))
               	{
                        currentState = (theSeed == PLAYER1) ? PLAYER1 : PLAYER2;
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

        public static boolean hasWon(int currentRow, int currentCol)
        {
		if(board[currentRow][0] != 0 && board[currentRow][1] != 0 && board[currentRow][2] != 0)
                	return (board[currentRow][0] + board[currentRow][1] + board[currentRow][2] == 15);

		if(board[0][currentCol] != 0 && board[1][currentCol] != 0 && board[2][currentCol] != 0)
                        return (board[0][currentCol] + board[1][currentCol] + board[2][currentCol] == 15);

		if(currentRow == currentCol && board[0][0] != 0 && board[1][1] != 0 && board[2][2] != 0)
			return (board[0][0] + board[1][1] + board[2][2] == 15);

		if(currentRow + currentCol == 2 && board[0][2] != 0 && board[1][1] != 0 && board[2][0] != 0)
			return (board[0][2] + board[1][1] + board[2][0] == 15);

		return false;
	}

        public static void printBoard()
        {
                for (int i=0;i<ROWS;++i)
                {
                        for (int j=0;j<COLS;++j)
                        {
				if(board[i][j] != 0)
                                	System.out.print(" " + board[i][j] +" ");
				else
					System.out.print("   ");
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

	public static boolean check(int num)
	{
		for(int i=0;i<ROWS;i++)
		{
			for(int j=0;j<COLS;j++)
			{
				if(board[i][j]  == num)
					return true;
			}
		}
		return false;
	}
}
