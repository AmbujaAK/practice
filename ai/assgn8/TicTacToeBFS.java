import java.util.LinkedList;
import java.util.Queue;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.lang.*;

@SuppressWarnings("serial")
public class TicTacToeBFS extends JFrame {
	
	public static final int ROWS = 3;
   	public static final int COLS = 3;
 
   	public static final int CELL_SIZE = 200;
   	public static final int CANVAS_WIDTH = CELL_SIZE * (COLS);
   	public static final int CANVAS_HEIGHT = CELL_SIZE * (ROWS);
   	public static final int GRID_WIDTH = 8;
   	public static final int GRID_WIDHT_HALF = GRID_WIDTH / 2;
  
   	public static final int CELL_PADDING = CELL_SIZE / 6;
   	public static final int SYMBOL_SIZE = CELL_SIZE - CELL_PADDING * 2;
   	public static final int SYMBOL_STROKE_WIDTH = 8;
 
   	public enum GameState 
	{
      		PLAYING, DRAW, CROSS_WON, NOUGHT_WON
   	}

   	private GameState currentState;
 
   	public enum Seed 
	{
      		EMPTY, CROSS, NOUGHT
   	}

   	private Seed currentPlayer; 
  	private Seed[][] board;
   	private DrawCanvas canvas;
   	private JLabel statusBar;
   	private JLabel suggestionBar;
   	private String suggestionText;
  
   	public TicTacToeBFS() 
	{
      		canvas = new DrawCanvas();
      		canvas.setPreferredSize(new Dimension(CANVAS_WIDTH, CANVAS_HEIGHT));
      		suggestionText="";
      
      		canvas.addMouseListener(new MouseAdapter() 
		{
         		@Override
         		public void mouseClicked(MouseEvent e) 
			{
            			int mouseX = e.getX();
            			int mouseY = e.getY();
            
            			int rowSelected = mouseY / CELL_SIZE;
            			int colSelected = mouseX / CELL_SIZE;
            
            			if (currentState == GameState.PLAYING) 
				{
               				if (rowSelected >= 0 && rowSelected < ROWS && colSelected >= 0 
					    && colSelected < COLS && board[rowSelected][colSelected] == Seed.EMPTY) 
					{
            	   
                  				board[rowSelected][colSelected] = currentPlayer;
                  				updateGame(currentPlayer, rowSelected, colSelected);
                  
                  				currentPlayer = (currentPlayer == Seed.CROSS) ? Seed.NOUGHT : Seed.CROSS;
                  				suggestionText=findBestMove(currentPlayer);
               				}
            			} 
				else 
				{
               				initGame();
            			}
            
            			repaint();
         		}
      		});
 
     
      		statusBar = new JLabel("  ");
      		statusBar.setFont(new Font(Font.DIALOG_INPUT, Font.BOLD, 18));
      		statusBar.setBorder(BorderFactory.createEmptyBorder(2, 5, 4, 5));
       
      		Container cp = getContentPane();
      		cp.setLayout(new BorderLayout());
      		cp.add(canvas, BorderLayout.CENTER);
      		cp.add(statusBar, BorderLayout.PAGE_END);
      
      		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
      		pack();
      		setTitle("Tic Tac Toe");
      		setVisible(true);
 
      		board = new Seed[ROWS][COLS];
      		initGame();
   	}
 
   	public void initGame() 
	{
      		for (int row = 0; row < ROWS; ++row)
         		for (int col = 0; col < COLS; ++col) 
            			board[row][col] = Seed.EMPTY;
         		
      		currentState = GameState.PLAYING;
      		currentPlayer = Seed.CROSS;
      		suggestionText=findBestMove(currentPlayer);
   	}
 

   	public void updateGame(Seed theSeed, int rowSelected, int colSelected) 
	{
      		if (hasWon(theSeed, rowSelected, colSelected)) 
		{
         		currentState = (theSeed == Seed.CROSS) ? GameState.CROSS_WON : GameState.NOUGHT_WON;
      		} 
		else if (isDraw()) 
		{
         		currentState = GameState.DRAW;
      		}
     	}
 
   	public boolean isDraw() 
	{
      		for (int row = 0; row < ROWS; ++row) 
		{
         		for (int col = 0; col < COLS; ++col) 
			{
            			if (board[row][col] == Seed.EMPTY) 
               				return false;
         		}
      		}
      		return true;
   	}
 
    	public boolean hasWon(Seed theSeed, int rowSelected, int colSelected) 
	{
      		return (board[rowSelected][0] == theSeed
            		&& board[rowSelected][1] == theSeed
            		&& board[rowSelected][2] == theSeed
       			|| board[0][colSelected] == theSeed
            		&& board[1][colSelected] == theSeed
            		&& board[2][colSelected] == theSeed
       			|| rowSelected == colSelected
            		&& board[0][0] == theSeed
            		&& board[1][1] == theSeed
            		&& board[2][2] == theSeed
       			|| rowSelected + colSelected == 2
            		&& board[0][2] == theSeed
            		&& board[1][1] == theSeed
            		&& board[2][0] == theSeed);
   	}

   	class DrawCanvas extends JPanel 
	{
    	  	@Override
      		public void paintComponent(Graphics g) 
		{
         		super.paintComponent(g);
         		setBackground(Color.WHITE);
 
         		g.setColor(Color.LIGHT_GRAY);

         		for (int row = 1; row < ROWS; ++row) 
			{
            			g.fillRoundRect(0, CELL_SIZE * row - GRID_WIDHT_HALF,
                  		CANVAS_WIDTH-1, GRID_WIDTH, GRID_WIDTH, GRID_WIDTH);
        		}

         		for (int col = 1; col < COLS; ++col) 
			{            
				g.fillRoundRect(CELL_SIZE * col - GRID_WIDHT_HALF, 0,
                  		GRID_WIDTH, CANVAS_HEIGHT-1, GRID_WIDTH, GRID_WIDTH);
         		}
 
         		Graphics2D g2d = (Graphics2D)g;
         		g2d.setStroke(new BasicStroke(SYMBOL_STROKE_WIDTH, BasicStroke.CAP_ROUND,
               		BasicStroke.JOIN_ROUND));

         		for (int row = 0; row < ROWS; ++row) 
			{
            			for (int col = 0; col < COLS; ++col) 
				{
               				int x1 = col * CELL_SIZE + CELL_PADDING;
               				int y1 = row * CELL_SIZE + CELL_PADDING;
               				if (board[row][col] == Seed.CROSS) 
					{
                  				g2d.setColor(Color.RED);
                  				int x2 = (col + 1) * CELL_SIZE - CELL_PADDING;
                  				int y2 = (row + 1) * CELL_SIZE - CELL_PADDING;
                  				g2d.drawLine(x1, y1, x2, y2);
                  				g2d.drawLine(x2, y1, x1, y2);
               				}
					else if (board[row][col] == Seed.NOUGHT) 
					{
                  				g2d.setColor(Color.BLUE);
                 	 			g2d.drawOval(x1, y1, SYMBOL_SIZE, SYMBOL_SIZE);
               				}
            			}
         		}
 
         		if (currentState == GameState.PLAYING) 
			{
            			statusBar.setForeground(Color.BLACK);
            			if (currentPlayer == Seed.CROSS) 
				{
               				statusBar.setText("X's Turn."+suggestionText);
            			} 
				else 
				{
               				statusBar.setText("O's Turn"+suggestionText);
            			}		  
         		} 
			else if (currentState == GameState.DRAW) 
			{
            			statusBar.setForeground(Color.RED);
            			statusBar.setText("It's a Draw! Click to play again.");
         		} 
			else if (currentState == GameState.CROSS_WON) 
			{
            			statusBar.setForeground(Color.RED);
            			statusBar.setText("'X' Won! Click to play again.");
         		} 
			else if (currentState == GameState.NOUGHT_WON) 
			{
            			statusBar.setForeground(Color.RED);
            			statusBar.setText("'O' Won! Click to play again.");
         		}
      		}
   	}
   	
	boolean isMovesLeft()
   	{
       		for (int i = 0; i<3; i++)
           		for (int j = 0; j<3; j++)
               			if (board[i][j]==Seed.EMPTY)
                   			return true;
       		return false;
   	}
	
   	int evaluate(Seed[][] board)
   	{
             	for (int row = 0; row<3; row++)
       		{
           		if (board[row][0]==board[row][1] && board[row][1]==board[row][2])
           		{
               			if (board[row][0]==Seed.CROSS)
                   			return +10;
               			else if (board[row][0]==Seed.NOUGHT)
                   			return -10;
           		}
       		}
    
             	for (int col = 0; col<3; col++)
       		{
           		if (board[0][col]==board[1][col] && board[1][col]==board[2][col])
           		{
               			if (board[0][col]==Seed.CROSS)
                   			return +10;
               			else if (board[0][col]==Seed.NOUGHT)
                  	 		return -10;
           		}
       		}
    
       		if (board[0][0]==board[1][1] && board[1][1]==board[2][2])
       		{
           		if (board[0][0]==Seed.CROSS)
              	 		return +10;
           		else if (board[0][0]==Seed.NOUGHT)
               			return -10;
       		}
    
       		if (board[0][2]==board[1][1] && board[1][1]==board[2][0])
       		{
          	 	if (board[0][2]==Seed.CROSS)
               			return +10;
           		else if (board[0][2]==Seed.NOUGHT)
               			return -10;
       		}
    
       		return 0;
   	}
   
   	int bfs(boolean isMax)
   	{
      		Queue<Seed[][]> q = new LinkedList<>();
      		int best;

      		if(isMax==true)
       			best = -10000;
      		else
       			best = 10000;

     		Seed[][] b=new Seed[3][3];;
	
      		for(int i=0;i<3;i++)
     		{
        		for(int j=0;j<3;j++)
        		{
            			b[i][j] = Seed.EMPTY;
        		}
     		}

      		for(int i=0;i<3;i++)
     		{
        		for(int j=0;j<3;j++)
        		{
            			b[i][j] = board[i][j];
        		}
     		}
	
       		q.add(b);
       		int depth = 0;

       		while(q.poll()==null)
      		{
          		int s = q.size();
          		for(int k=0;k<s;k++)
          		{
              			Seed[][]temp = q.remove();
              
              			for(int i=0;i<3;i++)
             			{
                			for(int j=0;j<3;j++)
               				{
                 				Seed[][] t=new Seed[3][3];
                 				for(int m=0;m<3;m++)
                 				{
                   					for(int n=0;n<3;n++)
                     						t[m][n] = temp[m][n];
                 				}
                  				if (temp[i][j]==Seed.EMPTY)
                   				{
                    					if(isMax)
                    					{
                     						t[i][j] = Seed.CROSS;
                     						int sc = evaluate(t);
                     						best = Math.max(best,sc);
                    					}
                   				 	else
                    					{
                     						t[i][j] = Seed.NOUGHT;
                     						int sc = evaluate(t);
                     						best = Math.min(best,sc);
                   					}
                     					q.add(t);
                     
                   				}
               				} 
            	 		}
          		}

         	 	if(isMax== true)
            			isMax = false;
          		else
            			isMax = true;
         		depth++;
      		}
    		return best;
   	}

   	String findBestMove(Seed currPlayer)
   	{
       		int bestVal = 0;
       		if(currPlayer==Seed.CROSS)
    	   		bestVal=-1000;
       		else
    	   		bestVal=1000;
       
       		int bestMoveRow = -1;
       		int bestMoveCol = -1;
    
      
       		for (int i = 0; i<3; i++)
       		{
           		for (int j = 0; j<3; j++)
           		{
               			if (board[i][j]==Seed.EMPTY)
               			{
                   			board[i][j] = currPlayer;
    
                   			if(currPlayer==Seed.CROSS)
                   			{
                       				int moveVal = bfs(false);
                       				board[i][j] = Seed.EMPTY;
     
                       				if (moveVal > bestVal)
                       				{
                           				bestMoveRow = i;
                           				bestMoveCol = j;
                           				bestVal = moveVal;
                       				}
                   			}
                   			else
                   			{
                	   			int moveVal = bfs(true);
                       
                       				board[i][j] = Seed.EMPTY;
        
                       				if (moveVal < bestVal)
                       				{
                           				bestMoveRow = i;
                           				bestMoveCol = j;
                           				bestVal = moveVal;
                       				} 
                   			}
                   
               			}
           		}
       		}
       
		String player="O";
      		if(currPlayer==Seed.CROSS)
    	  		player="X";
       		String newText=". Best move for "+player+" is row: "+Integer.toString(bestMoveRow+1)+" col: "+Integer.toString(bestMoveCol+1);
 
       		return newText;
   	}

   	public static void main(String[] args) 
	{
      		SwingUtilities.invokeLater(new Runnable() 
		{
         		@Override
         		public void run() 
			{
            			new TicTacToeBFS();
         		}
      		});
   	}
}

