#ifndef DEVICE_
#define DEVICE_
class Device
{
private:
	int size;
	char* brand;
	double price;
public:
	Device(const char* brand, const double price,const int size);
	Device(const Device& other);
	Device& operator=(const Device& other);
	virtual ~Device()=0;
	const char* getBrand();
	const double getPrice();
	void setBrand(char* brand);
	void setPrice(double brand);
	void input();
	void output();
};



#endif
