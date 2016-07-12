//Class declaration of menu_conversion
#ifndef CONVERSION_H_INCLUDED
#define CONVERSION_H_INCLUDED

class menu_conversion
{
    private:
    	char current_state;//Type of memory it is
		float size;//Size of user memory
    public:
    	bool menu();//Main menu where user inputs desired conversion
    	void converting();//Function where conversion occurs
};

#endif // CONVERSION_H_INCLUDED
