// msort by Gianna
// merge by Moody

#include <iostream>
#include <vector>
std::vector<int> msort(std::vector<int> in);
std::vector<int> merge(std::vector<int> left, std::vector<int> right);

int main(){
    std::vector<int> bruh = {0, 3 ,4, 6, 2, 6, 13, 63, 6, 8};
    msort(bruh);

    for(int i = 0; i < bruh.size(); i++){
        std::cout << bruh[i] << "\n";
    }
    return 1;
}
std::vector<int> msort(std::vector<int> in)
{
   std::vector<int> left;
   std::vector<int> right;
   std::vector<int> result;
  
   int mid = ((int)in.size()+1) / 2;
   int vecSize = (int)in.size();
  
   if (in.size() <= 1) //cannot be a left and right side if array is less than one or equal to one,too small!
   {
      return in;
   }
 
   int lefti = 0; 
   while(lefti < mid)  
   {
      left.push_back(in[lefti]);
      lefti++;
   }

   int righti = mid; 
   while(righti < vecSize) 
   {
      right.push_back(in[righti]);
      righti++;
   }
 
   left = msort(left);
   right = msort(right);
   
   return merge(left, right);
}

std::vector<int> merge(std::vector<int> left, std::vector<int> right)
{
	std::vector<int> out;
	auto lindex = left.begin();
	auto rindex = right.begin();

	// compare the first elements of each sub vector until you hit the end of one
	while (lindex != left.end() && rindex != right.end())
	{

		if (*(lindex) <= *(rindex))
		{
			out.push_back(*(lindex++));
		}
		else
		{
			out.push_back(*(rindex++));
		}
	}

	// if there's a remaining elements in either vector, fully flush them out
	if (lindex == left.end())
	{
		while (rindex != right.end())
		{
			out.push_back(*(rindex++));
		}
	}

	if (rindex == right.end())
	{
		while (lindex != left.end())
		{
			out.push_back(*(lindex++));
		}
	}
	return out;
}