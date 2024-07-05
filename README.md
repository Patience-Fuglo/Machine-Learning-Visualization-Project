# Machine Learning Visualization Project - K-Means Clustering Visualizer

## Project Overview
This project focuses on building a visualization tool for a machine learning concept, specifically a K-Means clustering visualizer, using C++. This involves several steps, focusing on implementing the K-Means algorithm and developing a simple graphical interface to visualize the clustering results.

## Project Structure
The goal is to create a tool that visualizes the K-Means clustering algorithm, helping users understand its working. The project involves the following steps and components:


1. ### Choose a Programming Environment:
   C++: Ideal for its performance and extensive use in high-frequency trading platforms.

2. ### Set Up Your Development Environment:
   Install Required Libraries: Ensure you have necessary libraries such as OpenCV for visualization and Eigen for numerical computations.

3. ### Implement the K-Means Algorithm:
   Implement the K-Means clustering algorithm from scratch or using available C++ libraries.

4. ### Develop the Visualization Tool:
   GUI Framework: Choose a GUI framework like Qt for developing the interactive visualization tool.
   Visualization Components: Design the GUI to include:
   Input parameters (number of clusters, data points generation options).
   Plotting area to visualize data points (scatter plot), cluster centroids, and cluster boundaries.
   
5. ### Interactive Features:
   User Interaction: Allow users to:
      Adjust parameters (number of clusters, data distribution, etc.).
      Visualize real-time updates as they adjust parameters.
   Feedback: Provide visual feedback on cluster assignments and centroid movements during algorithm iterations.
 
 6. ### Enhancements and Customizations:
    Performance: Optimize for larger datasets or complex scenarios.
    #### Additional Visualizations
    Animations for algorithm convergence.
    Different initialization strategies (random, k-means++, etc.).

 7. ### Documentation and User Guide:
   #### README: 
    Provide clear instructions on how to install and use your tool.
    User Guide: Include explanations of the K-Means algorithm and how to interpret the visualizations.
 
  8. ### Testing and Validation:
    Unit Tests: Ensure each component functions correctly.
    User Testing: Gather feedback to improve usability and clarity of visualizations.

  9. ### Deployment:
    Packaging: Package your tool for easy distribution (e.g., as a standalone executable or a C++ library).
    Publishing: Share your project on platforms like GitHub for others to use and contribute.

 ## Getting Started
  1.  ### Clone the Repository: 
     git clone: https://github.com/Patience-Fuglo/Machine-Learning-Visualization-Project.git

   2. ### Run the Visualization Tool:
      Execute the compiled binary to start the visualization tool.

  3. ### Compile the Project:
    g++ -I include src/order_book.cpp src/trading_engine.cpp main.cpp -o trading_engine

  4. ### Run the Executable:

    After successful compilation, you can run the executable with the following command:
   
    ./trading_engine
