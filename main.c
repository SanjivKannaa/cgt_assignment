#include<stdio.h>
#include<stdlib.h>

int *visited;
int number_of_vertices, number_of_edges;
int *vertices;
int **edges;
int seperable=0;
int **adj_matrix;


int main(){
    //getting the vertices
    printf("Enter the number of vertices : ");
    scanf("%d", &number_of_vertices);
    for(int i=0;i<number_of_vertices;i++){
        printf("Enter the %dth vertix : ", i+1);
        scanf("%d", &vertices[i]);
    }
    //getting the edges
    printf("\n\nEnter the number of edges : ");
    scanf("%d", &number_of_edges);
    for(int i=0;i<number_of_edges;i++){
        printf("Enter the edge : ");
        scanf("%d %d", &edges[i][0], &edges[i][1]);
    }
    for(int i=0;i<number_of_edges;i++){
        int value[2] = {0, 0};
        for(int j=0;j<number_of_vertices;j++){
            if(edges[i][0] == vertices[j]){
                value[0] = 1;
            }
            if(edges[i][1] == vertices[j]){
                value[1] = 1;
            }
        }
        if (value[0] == 0 || value[1] == 0){
            // exiting the run if the edges have a vertix that does not exist
            return 0;
        }
    }
    adj_matrix = (int**)malloc(sizeof(int*)*number_of_vertices);
    for(int i=0;i<number_of_vertices;i++){
        
    }
}