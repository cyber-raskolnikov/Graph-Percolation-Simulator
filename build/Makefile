CC=g++
CFLAGS=-std=c++11
SRC =../src/

all: main grid_node_percolation detail_grid_node_percolation beg_zoom_grid_node_percolation mid_zoom_grid_node_percolation grid_edge_percolation detail_grid_edge_percolation zoom_grid_edge_percolation geo_edge_percolation mid_zoom_geo_edge_percolation geo_radius detail_geo_edge_percolation zoom_geo_radius

main: $(SRC)main.cpp $(SRC)graph.cpp $(SRC)disjointset.cpp
	$(CC) -o main.exe $(SRC)main.cpp $(SRC)graph.cpp $(SRC)disjointset.cpp

grid_node_percolation: $(SRC)grid_node_percolation.cpp $(SRC)graph.cpp $(SRC)disjointset.cpp
	$(CC) -o grid_node_percolation.exe $(SRC)grid_node_percolation.cpp $(SRC)graph.cpp $(SRC)disjointset.cpp

detail_grid_node_percolation: $(SRC)detail_grid_node_percolation.cpp $(SRC)graph.cpp $(SRC)disjointset.cpp
	$(CC) -o detail_grid_node_percolation.exe $(SRC)detail_grid_node_percolation.cpp $(SRC)graph.cpp $(SRC)disjointset.cpp

beg_zoom_grid_node_percolation: $(SRC)beg_zoom_grid_node_percolation.cpp $(SRC)graph.cpp $(SRC)disjointset.cpp
	$(CC) -o beg_zoom_grid_node_percolation.exe $(SRC)beg_zoom_grid_node_percolation.cpp $(SRC)graph.cpp $(SRC)disjointset.cpp

mid_zoom_grid_node_percolation: $(SRC)mid_zoom_grid_node_percolation.cpp $(SRC)graph.cpp $(SRC)disjointset.cpp
	$(CC) -o mid_zoom_grid_node_percolation.exe $(SRC)mid_zoom_grid_node_percolation.cpp $(SRC)graph.cpp $(SRC)disjointset.cpp

grid_edge_percolation: $(SRC)grid_edge_percolation.cpp $(SRC)graph.cpp $(SRC)disjointset.cpp
	$(CC) -o grid_edge_percolation.exe $(SRC)grid_edge_percolation.cpp $(SRC)graph.cpp $(SRC)disjointset.cpp

detail_grid_edge_percolation: $(SRC)detail_grid_edge_percolation.cpp $(SRC)graph.cpp $(SRC)disjointset.cpp
	$(CC) -o detail_grid_edge_percolation.exe $(SRC)detail_grid_edge_percolation.cpp $(SRC)graph.cpp $(SRC)disjointset.cpp

zoom_grid_edge_percolation: $(SRC)zoom_grid_edge_percolation.cpp $(SRC)graph.cpp $(SRC)disjointset.cpp
	$(CC) -o zoom_grid_edge_percolation.exe $(SRC)zoom_grid_edge_percolation.cpp $(SRC)graph.cpp $(SRC)disjointset.cpp

geo_edge_percolation: $(SRC)geo_edge_percolation.cpp $(SRC)graph.cpp $(SRC)disjointset.cpp
	$(CC) -o geo_edge_percolation.exe $(SRC)geo_edge_percolation.cpp $(SRC)graph.cpp $(SRC)disjointset.cpp

mid_zoom_geo_edge_percolation: $(SRC)mid_zoom_geo_edge_percolation.cpp $(SRC)graph.cpp $(SRC)disjointset.cpp
	$(CC) -o mid_zoom_geo_edge_percolation.exe $(SRC)mid_zoom_geo_edge_percolation.cpp $(SRC)graph.cpp $(SRC)disjointset.cpp

geo_radius: $(SRC)geo_radius.cpp $(SRC)graph.cpp $(SRC)disjointset.cpp
	$(CC) -o geo_radius.exe $(SRC)geo_radius.cpp $(SRC)graph.cpp $(SRC)disjointset.cpp

detail_geo_edge_percolation: $(SRC)detail_geo_edge_percolation.cpp $(SRC)graph.cpp $(SRC)disjointset.cpp
	$(CC) -o detail_geo_edge_percolation.exe $(SRC)detail_geo_edge_percolation.cpp $(SRC)graph.cpp $(SRC)disjointset.cpp

zoom_geo_radius: $(SRC)zoom_geo_radius.cpp $(SRC)graph.cpp $(SRC)disjointset.cpp
	$(CC) -o zoom_geo_radius.exe $(SRC)zoom_geo_radius.cpp $(SRC)graph.cpp $(SRC)disjointset.cpp
clean:
	rm *.exe
