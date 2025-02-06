std::vector<int> vec = {1, 2, 3, 4, 5};

int index = 5;

//Correct way to access element at index 5, checking boundaries first
if (index >= 0 && index < vec.size()) {
  int element = vec[index];
  //Use element safely
} else {
  //Handle index out of range error appropriately
  //For example, throw an exception, return a default value, or log an error
  std::cerr << "Error: Index out of range" << std::endl;
}

//Alternative: Using at() method which throws an exception on out of bounds access
try {
  int element = vec.at(index); 
  //Use element safely
} catch (const std::out_of_range& oor) {
  std::cerr << "Out of Range error: " << oor.what() << '\n';
}