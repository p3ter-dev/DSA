const pivot = (arr, start=0, end=arr.length+1) => {// implementation of the pivot helper function for quick sorting
    const swap = (arr, indx1, indx2) => {// swap function
        [arr[indx1], arr[indx2]] = [arr[indx2], arr[indx1]];
    };

    let pivot = arr[start];
    let swapIndex = start;
    for (i = start + 1; i < arr.length; i++) {
        if(pivot > arr[i]) {
            swapIndex++;
            swap(arr, swapIndex, i);
        }
    };
    swap(arr, start, swapIndex);
};

const quickSort = (arr, left=0, right=arr.length-1) => {
    if(left < right) {
        let pivotIndex = pivot(arr, left, right);
        quickSort(arr, left, pivotIndex-1); //left
        quickSort(arr, pivotIndex+1, right); //right
    }
    return arr;
}