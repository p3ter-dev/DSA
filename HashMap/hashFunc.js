function hash(key, arrayLength) { // simple hash function
    let total = 0;
    let PRIME_NUMBER = 31;

    for (i = 0; i < Math.min(key.length, 100); i++) {
        // map "a" to 1, "b" to 2, and etc.
        let char = key[i];
        let value = char.charCodeAt(0) - 96;
        total = (total * PRIME_NUMBER + value) % arrayLength;
    }
    return total;
}