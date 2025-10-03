function fib(num) {
	if (num == 1 || num == 2) return 1;
	return fib(num - 1) + fib(num - 2);	
}
let result = fib(30)
console.log(result); // the time complexity of the function is O(2^n), which is not suitable.
