#pragma once

#include <string>

class Employee 
{
public:
	inline void setBirthName(std::string birthName) { m_BirthName = birthName; }
	inline std::string getBirthName() { return m_BirthName; }
	
	inline void setProfession(std::string profession) { m_Profession = profession; }
	inline std::string getProfession() { return m_Profession; }
private:
	std::string m_BirthName;
	std::string m_Profession;
};