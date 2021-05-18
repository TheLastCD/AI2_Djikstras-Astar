#include "bots.h"

class cDjikstra
{
    public:
        bool closed[GRIDWIDTH][GRIDHEIGHT]; //whether or not location is closed
        float cost[GRIDWIDTH][GRIDHEIGHT]; //cost value for each location
        int linkX[GRIDWIDTH][GRIDHEIGHT]; //link X coord for each location
        int linkY[GRIDWIDTH][GRIDHEIGHT]; //link Y coord for each location
        bool inPath[GRIDWIDTH][GRIDHEIGHT]; //whether or not a location is in
        bool completed;
        cDijkstra() 
        { 
            completed = false;
        }

        Build()
        {
            float newCost;
            bool isclosed = false;
            int parent[1];
            for(int x; x <= GRIDWIDTH; x++ )
            {
                for(int y; y <= GRIDHEIGHT; y++)
                {
                    closed[x][y] = false;
                    cost[x][y] =1000000000.000f;
                    linkX[x][y] = -1;
                    linkY[x][Y] = -1;
                    inPath[x][y] = false;
                }
            }
            cost[bot.PositionX()][bot.PositionY()] =0;
            closed[bot.PositionX()][bot.PositionY()] =false;
            //current Location
            parent[0] = bot.PositionX();
            parent[1] = bot.PositionY();
            while(!isclosed)
            {

                //hold location of neighbours
                int PositionHold[7][1];
                PositionHold[0][0]= parent[0]+1;
                PositionHold[0][1]= parent[1];
                PositionHold[1][0]= parent[0];
                PositionHold[1][1]= parent[1]+1;
                PositionHold[2][0]= parent[0]-1;
                PositionHold[2][1]= parent[1];   
                PositionHold[3][0]= parent[0];
                PositionHold[3][1]= parent[1]-1;


                PositionHold[4][0]= parent[0]+1;
                PositionHold[4][1]= parent[1]+1;
                PositionHold[5][0]= parent[0]-1;
                PositionHold[5][1]= parent[1]-1;
                PositionHold[6][0]= parent[0]+1;
                PositionHold[6][1]= parent[1]-1;
                PositionHold[7][0]= parent[0]-1;
                PositionHold[7][1]= parent[1]+1;
                for(int i; i <= 7; i++)
                {
                    //Check diagonal
                    if(i >= 4)
                    {
                        newcost = 1.4f
                    }
                    else
                    {
                        newcost = 1f
                    }
                    //Assign new cost;
                    newcost += cost[parent[0]] [parent[1]];

                    //check if weight changes
                    if(glevel.IsValid(PositionHold[i][0], PositionHold[i][1] && !closed[PositionHold[i][0]][PositionHold[i][1]] && newcost >= cost[PositionHold[i][0]][PositionHold[i][1]])
                    {
                        //if neighbour is a valid location, not close and new cost is higher than the original
                        cost[PositionHold[i]] [PositionHold[1]] = newcost;
                    }
                }



            }
        }
}
