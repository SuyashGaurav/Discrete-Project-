# Discrete-Project-
## Cheapest flights within k stops
#### Download the files:
 - PDF = [Discrete structures pdf](https://github.com/SuyashGaurav/Discrete-Project-/blob/main/Discrete%20Structures%20Project%20(1).pdf)
 - code = [ds_project.cpp](https://github.com/SuyashGaurav/Discrete-Project-/blob/main/ds_project.cpp)
 
#### How to run the code:
- Go to terminal and type 
```
g++ ds_project.cpp -o run
```
```
./run
```
#### Input format:
 - The first line consist of two spaced integer, **n** and **edges**, the number of vertices(cities) and cost
 - The following **edges** lines consist of three separated integers which indicates that there is a flight from city "from" to city "to" with cost "price"
 - The last three lines consist of **source**, **destination** and **stops** respectively.
#### Sample Input:
<img src = "https://github.com/SuyashGaurav/Discrete-Project-/blob/main/graph1.png" width = "30%">

```
4 5
0 1 1000
1 2 1000
2 0 1000
1 3 6000
2 3 2000
0
3
1
```
