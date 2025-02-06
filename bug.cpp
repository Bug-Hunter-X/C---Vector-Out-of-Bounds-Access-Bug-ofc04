std::vector<int> vec = {1, 2, 3, 4, 5};

//Incorrect way to access element at index 5
int element = vec[5]; // This will cause undefined behavior

//Correct way to check if an index is in bounds before accessing it.
int index = 5;
if (index >= 0 && index < vec.size()) {
  int element = vec[index];
} else {
  //Handle out of bounds error
}