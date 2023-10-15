enum class Color {
	White,
	Red,
	Orange,
	Blue,
};

// Злдесь неправильный параметр, надо заменить 

struct Point {
	double x = 1.0;
	double y = 0.0;
	double z = 0.0;
	Color color;
};

int main() {
	Color color1 = Color::Red;
	Color color2 = Color::Blue;
	int value = static_cast<int>(color2);
	Color color3 = static_cast<Color>(2);
	return 0;
}