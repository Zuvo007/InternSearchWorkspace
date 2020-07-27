class Solution {

    
    //this function basically help me 
    //to make the dfs search of the neighbor data points
    //return true if it finds the next character of our word 
    //return false if it doesn't find the next char
    //then we will keep ahead in our loop
    
 bool dfs(vector<vector<char>> &board,int i,int j,string &word,int idx,vector<vector<bool>> &visited)
    {
        //base conidtion
        if(idx==word.length()-1)
            return true;
      
        
        //make current element as visited
        
        visited[i][j]=true;
        
        
        //recursive condition
        
        //for visiting the upper element 
        
        if(i>0 and !visited[i-1][j] and board[i-1][j]==word[idx+1]){
           if( dfs(board,i-1,j,word,idx+1,visited))
                return true;}
        
        
        //for visiting the lower element 
        
         if(i<board.size()-1 and !visited[i+1][j] and board[i+1][j]==word[idx+1]){
            if(dfs(board,i+1,j,word,idx+1,visited))
                return true;}
        
        //for visiting the left neighbor element
        
         if(j>0 and !visited[i][j-1] and board[i][j-1]==word[idx+1]){
            if(dfs(board,i,j-1,word,idx+1,visited))
                return true;}
        
        //for visiting the right neighbor element 
        
         if(j<board[0].size()-1 and !visited[i][j+1] and board[i][j+1]==word[idx+1]){
           if(dfs(board,i,j+1,word,idx+1,visited))
                return true;}
        
        
        
        
        
        //backtracking to make it false or unvisited when it's all neighbors
        //return false
        
        visited[i][j]=false;
     
     //if all the conidtions are false 
     //it is returning as false
        
        return false;
        
        
        
  }
    
 public: 
    bool exist(vector<vector<char>>& board, string word) {
        
        //determining the size of the row and column
        
        int row=board.size(),col=board[0].size();
        
        //conisdering a booleon 2D vector
        //to mark traversed element as "visited" in our search space
        //so that we can backtrack from false result
        //or can search by the dfs having a look into other neighbors 
        
        
        vector<vector<bool>> visited(row,vector<bool>(col,false));
        
        //checking thr condition for the 0th char in the word
        //start searching from the next index
        for(int i=0;i<row;i++)
            for(int j=0;j<col;j++)
                if(board[i][j]==word[0]){
                    if(dfs(board,i,j,word,0,visited))
                        return true;}
        return false;
       
        
        
        
      
        
        
        
        
    }
};
