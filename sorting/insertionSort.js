const insertionSort = (array) => {
    for(i = 1; i < array.length; i++) {
        let currentValue = array[i];
        for (j = i - 1; j > -1 && array[j] > currentValue; j--) {
            array[j + 1] = array[j];
        }
        array[j + 1] = currentValue;
    }
    return array;
}