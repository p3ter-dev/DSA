const merge = (array1, array2) => { //used for only for merging two arrays
    let results = [];
    let i = 0, j = 0;
    while(i < array1.length && j < array2.length) {
        if (array1[i] < array2[j]) {
            results.push(array1[i]);
            i++;
        } else {
            results.push(array2[j]);
            j++;
        }
    }
    
    while(i < array1.length) {
        results.push(array1[i]);
        i++;
    }

    while(j < array2.length) {
        results.push(array2[j]);
        j++;
    }
    return results;
}