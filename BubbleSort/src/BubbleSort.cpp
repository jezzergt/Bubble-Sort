#include <iostream>
#include "BubbleSort.h"

void BubbleSort::Sort()
{
	for (int i = 0; i < m_ArrayLength - 1; i++)
	{
		for (int j = 0; j < m_ArrayLength - i - 1; j++) 
		{		
			if (m_Array[j] > m_Array[j + 1]) {
				int temp = m_Array[j];
				m_Array[j] = m_Array[j + 1];
				m_Array[j + 1] = temp;
			}
		}
	}

	for (int k = 0; k < 8; k++)
	{
		std::cout << m_Array[k] << std::endl;
	}
}
