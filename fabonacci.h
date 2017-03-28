#ifndef FIBONACCI_H_
#define FIBONACCI_H_


/******************************************************************************
* Function Name:  isPrimeNumber
**************************************************************************//**
*   @brief      This function check the number whether it is prime or not. It
*   			will return true if number is prime and false if number is not
*   			prime number. 0, 1 are considered as non-prime as per defination.
*   @param[in]  number: that need to be determined prime or not
*   @param[out] true: if number is prime
*   			false: if number is not prime
*   @retval     true/false
*   @warning    the return value should be upto 32 bit.
*   @remark     0 and 1 are considered as non prime.
*//***************************************************************************/
bool isPrimeNumber(uint32_t number);

/******************************************************************************
* Function Name:  isDivisibleBy
**************************************************************************//**
*   @brief      This function check the number is divisible by divisor or not.
*   @param[in]  divident: that should be divided
*   			divisor: number divided by
*   @param[out] true: if reminder is 0
*   			false: if reminder is non zero
*   @retval     true/false
*   @warning    0 should not be passed
*   @remark     0 should not be passed.
*//***************************************************************************/
bool isDivisibleBy(uint32_t divident, uint8_t divisor);

/******************************************************************************
* Function Name:  fibonacci
**************************************************************************//**
*   @brief      This function is used for fibonacci series. It take the value
*   			of n as input and f(n) as output. The fibonaccci number
*   			should be upto 32bit
*   @param[in]  number: upto which fibonacci is to be calculate
*   @param		none
*   @retval     none
*   @warning    the f(n) value should be upto 32 bit
*   @remark     None
*//***************************************************************************/
void fibonacci(uint8_t num);

/******************************************************************************
* Function Name:  printRequirement
**************************************************************************//**
*   @brief      Print the required string or the number
*   @param[in]  number:f(n)
*   @param[out] none
*   @retval     none
*   @warning    none
*   @remark     none
*/
void printRequirement(uint32_t value);


#endif /* FIBONACCI_H_ */
