Use of the make commands to compile the different experiment versions of the program:

    make main: Builds in the current folder the main.cpp program, used for custom experimentation

    make grid_node_percolation: Builds in the current folder the program used for
                                the experimentation on the number of connected components on a grid graph after applying node percolations with different probability.
                                
    make detail_grid_node_percolation: Builds in the current folder the program used for
                                the experimentation on the number of connected components on a grid graph after applying node percolations with different probability, this implementation 					computes more steps per seed iteration and renders a more accurate result.
                                
    make beg_zoom_grid_node_percolation: Builds in the current folder the program used for
                                the experimentation on the number of connected components on a grid graph after applying node percolations with different probabilities ranging on the lowest 					values, this implementation tries to find a phase change at low probability percolations.

    make mid_zoom_grid_node_percolation: Builds in the current folder the program used for
                                the experimentation on the number of connected components on a grid graph after applying node percolations with different probabilities ranging on the median 					values, this implementation tries to find an special case phase change.

    make grid_edge_percolation: Builds in the current folder the program used for
                                the experimentation on the number of connected components on a grid graph after applying edge percolations with different probability.
                                
    make detail_grid_edge_percolation: Builds in the current folder the program used for
                                the experimentation on the number of connected components on a grid graph after applying edge percolations with different probability, this implementation 					computes more steps per seed iteration and renders a more accurate result.
                                
    make zoom_grid_edge_percolation: Builds in the current folder the program used for
                                the experimentation on the number of connected components on a grid graph after applying edge percolations with different probabilities ranging on the lowest 					values, this implementation tries to find a phase change at low probability percolations.
                                
    make geo_radius: Builds in the current folder the program used for the experimentation on the radius needed
    			on a random geometric graph (500 nodes).

    make geo_edge_percolation: Builds in the current folder the program used for the experimentation on the number of connected components on a random geometric graph (500 nodes) after applying
				edge percolations with different probability.

    make mid_zoom_geo_edge_percolation: Builds in the current folder the program used for the experimentation on the number of connected components on a random geometric graph (500 nodes) after
					applying edge percolations with different probabilities ranging on the median values, this implementation tries to find an special case phase change.

    make detail_geo_edge_percolation: Builds in the current folder the program used for the experimentation on the number of connected components on a random geometric graph (500 nodes) after
				      applying edge percolations with different probabilities ranging [0.9,0.95], this implementation tries to find the first probability where we have two
				      connected components.
    			
    make zoom_geo_radius: Builds in the current folder the program used for the experimentation on the radius needed
    			on a random geometric graph (500 nodes) for it to be connected, this implementation focuses on the lowest radius range as the broader scope implementation was not precise enough.
