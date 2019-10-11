#coding: utf-8

def insertion_sort(array, index):
	count = index;
	
	while array[count] < array[count - 1]:
		aux = array[count];
		array[count] = array[count - 1];
		array[count - 1] = aux;
		count -= 1;
		
		if count == 0:
			break;
	
	if index < len(array) -1:
		insertion_sort(array, index + 1);
		
	return array;

