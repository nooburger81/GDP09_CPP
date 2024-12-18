#include <iostream>
#include <vector>

int main()
{
	std::vector<float> temperature_list = { 12.3f, 40.0f, 21.5f, 32.0f, -15.0f, 0.0f };
	
	for (int i = 0; i < temperature_list.size(); i++)
	{
		float conversion = (temperature_list[i] * 1.8) + 32;
		std::cout << temperature_list[i] << " Celsius is " << conversion << " in Farenheit " << std::endl;

	}
}