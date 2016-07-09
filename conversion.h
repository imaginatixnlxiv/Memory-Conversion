#ifndef CONVERSION_H_INCLUDED
#define CONVERSION_H_INCLUDED

class menu_conversion
{
    private:
    	float user_input;//User inputted size
    	float converted_input;//Converted user_input
    public:
    	void menu();//Main menu where user inputs desired conversion
    	void conversion();//Function where conversion occurs
    	float get_conversion();//function that returns converted value
};

#endif // CONVERSION_H_INCLUDED
