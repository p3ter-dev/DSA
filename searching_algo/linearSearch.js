const linearSearch = (array, value) => { //in linear search we visit one item at a time(unsorted array), by checking by
    for(i = 0; i < array.length; i++) {//starting from the beginning with O(n) time complexity on average
        if(array[i] === value) return i;//and worst case and O(1) best case.
    }
    return -1;
}

// linearSearch([20, 56, 47, 37, 37], 37);