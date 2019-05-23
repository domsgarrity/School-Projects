package core;

import java.awt.Color;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Random;
import javax.swing.JButton;
import javax.swing.JOptionPane;
import userInterface.BattleshipUI;
import userInterface.Player;

public class BattleshipClient 
{
    Player[] players;
    private BattleshipUI parent;
    BattleshipUI UI;
   // Ship ships;
    Player currentP;
    
    public BattleshipClient(Player[] set, BattleshipUI BUI)
    {
        players = set;
        UI = BUI;
    }
    
    public void play()
    {
        changeListener();
    }
    
    
        
    public boolean winCheck()
    {
        int ships = 0;
                for(Player player : players)
                {
                    for(Ship ship :player.getShips())
                    {
                    if(ship.isShipSunk())
                        ships++;
                    }
                    if (ships == player.getShips().size())
                    {
                        JOptionPane.showMessageDialog(parent, player.getUserName() + " has lost.");
                        return true;
                    }
                }
                    
                return false;
    }
    
    private void endGame()
    {
        for(Player player : players)
        {
            for(int row = 0; row < player.getRows(); row++)
            {
                for(int col = 0; col < player.getCols(); col++)
                {
                    player.getBoard()[row][col].setEnabled(false);
                }
            }
        }
    }
    
    private void changeListener()
    {
        for(Player player : players)
        {
            for(int row = 0; row < player.getRows(); row++)
            {
                for(int col = 0; col < player.getCols(); col++)
                {
                    player.removeListener(player.getBoard()[row][col], player.getBoardListener());
                }
            }
        }
        
        for(int row = 0; row < players[Constants.PLAYER_TWO].getRows(); row++)
            for(int col = 0; col < players[Constants.PLAYER_TWO].getCols(); col++)
                players[Constants.PLAYER_TWO].setListener(players[Constants.PLAYER_TWO].getBoard()[row][col],new playListener());
        
    }
    private void ComputerPick()
    {
        Random random = new Random();
        int row = random.nextInt(10);
        int col = random.nextInt(10);
        
        if(players[Constants.PLAYER_ONE].getBoard()[row][col].getBackground() == Color.BLUE || players[Constants.PLAYER_ONE].getBoard()[row][col].getBackground() == Color.RED)
            UI.updateTextArea("Square Already Selected, lose turn");
        
        else if(players[Constants.PLAYER_ONE].isHit(row, col))
        {
            players[Constants.PLAYER_ONE].getBoard()[row][col].setBackground(Color.RED);
            players[Constants.PLAYER_ONE].getBoard()[row][col].setOpaque(true);
        }
        else
        {
            players[Constants.PLAYER_ONE].getBoard()[row][col].setBackground(Color.BLUE);
            players[Constants.PLAYER_ONE].getBoard()[row][col].setOpaque(true);
        }
    }
    private void switchPlayers(){
        if(winCheck())
            endGame();
        if(currentP == players[Constants.PLAYER_ONE])
        {
            currentP = players[Constants.PLAYER_TWO];
            ComputerPick();
            UI.updateTextArea("Player 2, your turn");
        }
        else
        {
            currentP = players[Constants.PLAYER_ONE];
            UI.updateTextArea("Player 1, your turn");
        }
    }

    public class playListener implements ActionListener
    {   
        @Override

        
        public void actionPerformed(ActionEvent ae) 
        {
            if(ae.getSource() instanceof JButton)
            {
                JButton button = (JButton)ae.getSource();
                int row = (int)button.getClientProperty("row");
                int col = (int)button.getClientProperty("col");
                
                //player already selected button
                if(players[Constants.PLAYER_TWO].getBoard()[row][col].getBackground() == Color.RED ||players[Constants.PLAYER_TWO].getBoard()[row][col].getBackground() == Color.BLUE)
                {
                    UI.updateTextArea("Square already selected, lose turn.");
                   
               } else if(players[Constants.PLAYER_TWO].isHit(row, col))
                        {
                        players[Constants.PLAYER_TWO].getBoard()[row][col].setBackground(Color.RED);
                        }
              else 
               {
                        players[Constants.PLAYER_TWO].getBoard()[row][col].setBackground(Color.BLUE);
                }
              
            }
            switchPlayers();
        }
    
    }  
      
}





