#ifndef __CSINGLETON_H__
#define __CSINGLETON_H__

class CSingleton 
{
private:
	CSingleton()    
	{

	};

	~CSingleton()
	{

	};

	static CSingleton * pInstance;
	static std::mutex mMutex;

public:
	static CSingleton * getInstance()
	{
		if (!pInstance)
		{
			std::lock_guard<std::mutex> lock(mMutex);
			if (!pInstance)
			{
				static CSingleton instance;
				pInstance = &instance;
			}
		}
		return pInstance;
	}

};



#endif
