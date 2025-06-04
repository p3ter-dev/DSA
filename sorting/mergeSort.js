function merge(array1, array2) {
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

function mergeSort(array) {
    if (array.length <= 1) return array;
    let midpoint = Math.floor(array.length / 2);
    let leftSide = mergeSort(array.slice(0, midpoint));
    let rightSide = mergeSort(array.slice(midpoint));
    return merge(leftSide, rightSide);
}