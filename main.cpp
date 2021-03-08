#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

int NumberOfGuests;
int ctr=0;


class Graph{

public:

    string GuestList[50];
    int AdjacentMatrix [50][50];
    bool visited[50];


    void AddGuest(string name){

            GuestList[ctr++]=name;

    }

    void InsertEdge (string FromN,string ToN){
            int fromNNUMBER =0;
            int toNNUMBER= 0;
        for(int i=0;i<NumberOfGuests;i++){
                if(FromN==GuestList[i]){
                    fromNNUMBER=i;
                }
                if(ToN==GuestList[i]){
                    toNNUMBER=i;
                }

        }
            AdjacentMatrix[toNNUMBER][fromNNUMBER]=1;
            AdjacentMatrix[fromNNUMBER][toNNUMBER]=1;

    }


void Dfs(int x)
{
	visited[x] = true;


	for(int i=0;i<NumberOfGuests;i++)
	{
		int Child = AdjacentMatrix[x][i];
		if(Child)
		if (!visited[i])
			Dfs(i);
	}
}

int NumberOfTables()
{
	int NumberOfT = 0;
	for(int i=0;i<NumberOfGuests;i++)
	{
		if(!visited[i])
		{
			Dfs(i);
			NumberOfT++;
		}
	}
	return NumberOfT;
}};

int main()
{
    string GuestName;
    Graph graph;
    int NumberOfRelation;
    cout<<"number of guests:  ";
    cin>>NumberOfGuests;

    for(int i=0;i<NumberOfGuests;i++){
        cout<<"Guest number "<<i+1<<" Name: ";
        cin>>GuestName;
        graph.AddGuest(GuestName);

    }

    for(int i=0;i<NumberOfGuests;i++){
        cout<<"please enter number of guests that know "<<graph.GuestList[i]<<" : ";
        cin>>NumberOfRelation;
        for(int j=0;j<NumberOfRelation;j++){
            cout<<"Guest number "<<j+1<<" :  ";
            cin>>GuestName;
            graph.InsertEdge(graph.GuestList[i],GuestName);
                                    }
                            }
    cout<<"\n"<<"Number of tables: "<<graph.NumberOfTables()<<"\n";

    return 0;
}
