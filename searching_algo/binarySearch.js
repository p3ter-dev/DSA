//binary search only works in sorted arrays
const binarySearch = (array, value) => {
    let startPointer = 0, endPointer = array.length - 1; //using two pointers at the start and end, and
    let middlePointer = Math.floor((startPointer + endPointer) / 2);//with middle pointer
    while(array[middlePointer] !== value && startPointer <= endPointer) {
        if (value < array[middlePointer]) {
            endPointer = middlePointer - 1;
        } else {
            startPointer = middlePointer + 1;
        }
        middlePointer = Math.floor((startPointer + endPointer) / 2);
    }
    if (array[middlePointer] === value) return middlePointer;
    return -1;
}

// binarySearch([23, 47, 59, 63, 73, 99, 103], 59);