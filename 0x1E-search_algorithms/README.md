<nav><br></nav>
<main>
    <article>
        <h1>0x1E. C - Search Algorithms</h1>
        <div>
            <div>C Algorithm</div>
        </div>
        <div>
            <ul>
                <li>&nbsp;By: Barnabas Moses Yabilsu&nbsp;</li>
                <li>&nbsp;Weight: 1</li>
            </ul>
        </div>
        <div>
            <h2>Resources</h2>
            <p><strong>Read or watch</strong>:</p>
            <ul>
                <li><a href="https://intranet.alxswe.com/rltoken/ap2kuRv8qrUMyQ0-MY3EXw" title="Search algorithm" target="_blank">Search algorithm</a></li>
                <li><a href="https://intranet.alxswe.com/rltoken/QK9ENdoTyqGs0d4_M3XE3g" title="Space complexity (1)" target="_blank">Space complexity (1)</a></li>
            </ul>
            <h2>Learning Objectives</h2>
            <p>At the end of this project, you are expected to be able to&nbsp;<a href="https://intranet.alxswe.com/rltoken/i0Ru9NIvGBHVAlsg7w5vVg" title="explain to anyone" target="_blank">explain to anyone</a>,&nbsp;<strong>without the help of Google</strong>:</p>
            <h3>General</h3>
            <ul>
                <li>What is a search algorithm</li>
                <li>What is a linear search</li>
                <li>What is a binary search</li>
                <li>What is the best search algorithm to use depending on your needs.&nbsp;</li>
            </ul>
            <h2>Requirements</h2>
            <h3>General</h3>
            <ul>
                <li>Allowed editors:&nbsp;<code>vi</code>,&nbsp;<code>vim</code>,&nbsp;<code>emacs</code></li>
                <li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
                <li>All your files should end with a new line</li>
                <li>A&nbsp;<code>README.md</code> file, at the root of the folder of the project, is mandatory</li>
                <li>Your code should use the&nbsp;<code>Betty</code> style. It will be checked using&nbsp;<a href="https://github.com/alx-tools/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and&nbsp;<a href="https://github.com/alx-tools/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
                <li>You are not allowed to use global variables</li>
                <li>No more than 5 functions per file</li>
                <li>You are only allowed to use the&nbsp;<code>printf</code> function of the standard library. Any call to another function like&nbsp;<code>strdup</code>,&nbsp;<code>malloc</code>, &hellip; is forbidden.</li>
                <li>In the following examples, the&nbsp;<code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own&nbsp;<code>main.c</code> files at compilation. Our&nbsp;<code>main.c</code> files might be different from the one shown in the examples</li>
                <li>The prototypes of all your functions should be included in your header file called&nbsp;<code>search_algos.h</code></li>
                <li>Don&rsquo;t forget to push your header file</li>
                <li>All your header files should be include guarded</li>
            </ul>
            <h2>More Info</h2>
            <p>You will be asked to write files containing big O notations. Please use this format:</p>
            <ul>
                <li><code>O(1)</code></li>
                <li><code>O(n)</code></li>
                <li><code>O(n!)</code></li>
                <li>n*m -&gt;&nbsp;<code>O(nm)</code></li>
                <li>n square -&gt;&nbsp;<code>O(n^2)</code></li>
                <li>sqrt n -&gt;&nbsp;<code>O(sqrt(n))</code></li>
                <li>log(n) -&gt;&nbsp;<code>O(log(n))</code></li>
                <li>n * log(n) -&gt;&nbsp;<code>O(nlog(n))</code></li>
                <li>&hellip;</li>
            </ul>
        </div>
        <h2>Tasks</h2>
        <div>
            <div>
                <h3>0. Linear search</h3>
                <div>mandatory</div>
            </div>
            <div>
                <p>Write a function that searches for a value in an array of integers using the&nbsp;<a href="https://intranet.alxswe.com/rltoken/17RKhbmvh_u4ebCwaSxCxg" title="Linear search algorithm" target="_blank">Linear search algorithm</a></p>
                <ul>
                    <li>Prototype :&nbsp;<code>int linear_search(int *array, size_t size, int value);</code></li>
                    <li>Where&nbsp;<code>array</code> is a pointer to the first element of the array to search in</li>
                    <li><code>size</code> is the number of elements in&nbsp;<code>array</code></li>
                    <li>And&nbsp;<code>value</code> is the value to search for</li>
                    <li>Your function must return the first index where&nbsp;<code>value</code> is located</li>
                    <li>If&nbsp;<code>value</code> is not present in&nbsp;<code>array</code> or if&nbsp;<code>array</code> is&nbsp;<code>NULL</code>, your function must return&nbsp;<code>-1</code></li>
                    <li>Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)</li>
                </ul>
                <pre><code>wilfried@0x1E-search_algorithms$ cat 0-main.c 
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;search_algos.h&quot;

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf(&quot;Found %d at index: %d\n\n&quot;, 3, linear_search(array, size, 3));
    printf(&quot;Found %d at index: %d\n\n&quot;, 42, linear_search(array, size, 42));
    printf(&quot;Found %d at index: %d\n&quot;, 999, linear_search(array, size, 999));
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear
wilfried@0x1E-search_algorithms$ ./0-linear 
Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Found 3 at index: 3

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Found 42 at index: 2

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [42]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [-1]
Value checked array[9] = [9]
Found 999 at index: -1
</code></pre>
            </div>
            <div>
                <div>
                    <p><strong>Repo:</strong></p>
                    <ul>
                        <li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
                        <li>Directory:&nbsp;<code>0x1E-search_algorithms</code></li>
                        <li>File:&nbsp;<code>0-linear.c</code></li>
                    </ul>
                </div>
            </div>
            <div>
                <div><br></div>
            </div>
        </div>
        <div>
            <div>
                <h3>1. Binary search</h3>
                <div>mandatory</div>
            </div>
            <div>
                <p>Write a function that searches for a value in a sorted array of integers using the&nbsp;<a href="https://intranet.alxswe.com/rltoken/SnveFJhSDE7o8bEx-kGGpA" title="Binary search algorithm" target="_blank">Binary search algorithm</a></p>
                <ul>
                    <li>Prototype :&nbsp;<code>int binary_search(int *array, size_t size, int value);</code></li>
                    <li>Where&nbsp;<code>array</code> is a pointer to the first element of the array to search in</li>
                    <li><code>size</code> is the number of elements in&nbsp;<code>array</code></li>
                    <li>And&nbsp;<code>value</code> is the value to search for</li>
                    <li>Your function must return the index where&nbsp;<code>value</code> is located</li>
                    <li>You can assume that&nbsp;<code>array</code> will be sorted in ascending order</li>
                    <li>You can assume that&nbsp;<code>value</code> won&rsquo;t appear more than once in&nbsp;<code>array</code></li>
                    <li>If&nbsp;<code>value</code> is not present in&nbsp;<code>array</code> or if&nbsp;<code>array</code> is&nbsp;<code>NULL</code>, your function must return&nbsp;<code>-1</code></li>
                    <li>You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray) (See example)</li>
                </ul>
                <pre><code>wilfried@0x1E-search_algorithms$ cat 1-main.c 
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;search_algos.h&quot;

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf(&quot;Found %d at index: %d\n\n&quot;, 2, binary_search(array, size, 2));
    printf(&quot;Found %d at index: %d\n\n&quot;, 5, binary_search(array, 5, 5));
    printf(&quot;Found %d at index: %d\n&quot;, 999, binary_search(array, size, 999));
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-binary.c -o 1-binary
wilfried@0x1E-search_algorithms$ ./1-binary 
Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 0, 1, 2, 3
Searching in array: 2, 3
Found 2 at index: 2

Searching in array: 0, 1, 2, 3, 4
Searching in array: 3, 4
Searching in array: 4
Found 5 at index: -1

Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 5, 6, 7, 8, 9
Searching in array: 8, 9
Searching in array: 9
Found 999 at index: -1
</code></pre>
            </div>
            <div>
                <div>
                    <p><strong>Repo:</strong></p>
                    <ul>
                        <li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
                        <li>Directory:&nbsp;<code>0x1E-search_algorithms</code></li>
                        <li>File:&nbsp;<code>1-binary.c</code></li>
                    </ul>
                </div>
            </div>
            <div>
                <div><br></div>
            </div>
        </div>
        <div>
            <div>
                <h3>2. Big O #0</h3>
                <div>mandatory</div>
            </div>
            <div>
                <p>What is the&nbsp;<code>time complexity</code> (worst case) of a linear search in an array of size&nbsp;<code>n</code>?</p>
            </div>
            <div>
                <div>
                    <p><strong>Repo:</strong></p>
                    <ul>
                        <li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
                        <li>Directory:&nbsp;<code>0x1E-search_algorithms</code></li>
                        <li>File:&nbsp;<code>2-O</code></li>
                    </ul>
                </div>
            </div>
            <div>
                <div><br></div>
            </div>
        </div>
        <div>
            <div>
                <h3>3. Big O #1</h3>
                <div>mandatory</div>
            </div>
            <div>
                <p>What is the&nbsp;<code>space complexity</code> (worst case) of an iterative linear search algorithm in an array of size&nbsp;<code>n</code>?</p>
            </div>
            <div>
                <div>
                    <p><strong>Repo:</strong></p>
                    <ul>
                        <li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
                        <li>Directory:&nbsp;<code>0x1E-search_algorithms</code></li>
                        <li>File:&nbsp;<code>3-O</code></li>
                    </ul>
                </div>
            </div>
            <div>
                <div><br></div>
            </div>
        </div>
        <div>
            <div>
                <h3>4. Big O #2</h3>
                <div>mandatory</div>
            </div>
            <div>
                <p>What is the&nbsp;<code>time complexity</code> (worst case) of a binary search in an array of size&nbsp;<code>n</code>?</p>
            </div>
            <div>
                <div>
                    <p><strong>Repo:</strong></p>
                    <ul>
                        <li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
                        <li>Directory:&nbsp;<code>0x1E-search_algorithms</code></li>
                        <li>File:&nbsp;<code>4-O</code></li>
                    </ul>
                </div>
            </div>
            <div>
                <div><br></div>
            </div>
        </div>
        <div>
            <div>
                <h3>5. Big O #3</h3>
                <div>mandatory</div>
            </div>
            <div>
                <p>What is the&nbsp;<code>space complexity</code> (worst case) of a binary search in an array of size&nbsp;<code>n</code>?</p>
            </div>
            <div>
                <div>
                    <p><strong>Repo:</strong></p>
                    <ul>
                        <li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
                        <li>Directory:&nbsp;<code>0x1E-search_algorithms</code></li>
                        <li>File:&nbsp;<code>5-O</code></li>
                    </ul>
                </div>
            </div>
            <div>
                <div><br></div>
            </div>
        </div>
        <div>
            <div>
                <h3>6. Big O #4</h3>
                <div>mandatory</div>
            </div>
            <div>
                <p>What is the space complexity of this function / algorithm?</p>
                <pre><code>int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i &lt; n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
</code></pre>
            </div>
            <div>
                <div>
                    <p><strong>Repo:</strong></p>
                    <ul>
                        <li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
                        <li>Directory:&nbsp;<code>0x1E-search_algorithms</code></li>
                        <li>File:&nbsp;<code>6-O</code></li>
                    </ul>
                </div>
            </div>
            <div>
                <div><br></div>
            </div>
        </div>
        <div>
            <div>
                <h3>7. Jump search</h3>
                <div>#advanced</div>
            </div>
            <div>
                <p>Write a function that searches for a value in a sorted array of integers using the&nbsp;<a href="https://intranet.alxswe.com/rltoken/1Op40kSYMN23JsOu6F3P1A" title="Jump search algorithm" target="_blank">Jump search algorithm</a></p>
                <ul>
                    <li>Prototype :&nbsp;<code>int jump_search(int *array, size_t size, int value);</code></li>
                    <li>Where&nbsp;<code>array</code> is a pointer to the first element of the array to search in</li>
                    <li><code>size</code> is the number of elements in&nbsp;<code>array</code></li>
                    <li>And&nbsp;<code>value</code> is the value to search for</li>
                    <li>Your function must return the first index where&nbsp;<code>value</code> is located</li>
                    <li>You can assume that&nbsp;<code>array</code> will be sorted in ascending order</li>
                    <li>If&nbsp;<code>value</code> is not present in&nbsp;<code>array</code> or if&nbsp;<code>array</code> is&nbsp;<code>NULL</code>, your function must return&nbsp;<code>-1</code></li>
                    <li>You have to use the square root of the size of the array as the jump step.</li>
                    <li>You can use the&nbsp;<code>sqrt()</code> function included in&nbsp;<code>&lt;math.h&gt;</code> (don&rsquo;t forget to compile with -lm)</li>
                    <li>Every time you compare a value in the array to the value you are searching for, you have to print this value (see example)</li>
                </ul>
                <pre><code>wilfried@0x1E-search_algorithms$ cat 100-main.c 
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;search_algos.h&quot;

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf(&quot;Found %d at index: %d\n\n&quot;, 6, jump_search(array, size, 6));
    printf(&quot;Found %d at index: %d\n\n&quot;, 1, jump_search(array, size, 1));
    printf(&quot;Found %d at index: %d\n&quot;, 999, jump_search(array, size, 999));
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 100-main.c 100-jump.c -lm -o 100-jump
wilfried@0x1E-search_algorithms$ ./100-jump 
Value checked array[0] = [0]
Value checked array[3] = [3]
Value found between indexes [3] and [6]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [5]
Value checked array[6] = [6]
Found 6 at index: 6

Value checked array[0] = [0]
Value found between indexes [0] and [3]
Value checked array[0] = [0]
Value checked array[1] = [1]
Found 1 at index: 1

Value checked array[0] = [0]
Value checked array[3] = [3]
Value checked array[6] = [6]
Value checked array[9] = [9]
Value found between indexes [9] and [12]
Value checked array[9] = [9]
Found 999 at index: -1

</code></pre>
            </div>
            <div>
                <div>
                    <p><strong>Repo:</strong></p>
                    <ul>
                        <li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
                        <li>Directory:&nbsp;<code>0x1E-search_algorithms</code></li>
                        <li>File:&nbsp;<code>100-jump.c</code></li>
                    </ul>
                </div>
            </div>
            <div>
                <div><br></div>
            </div>
        </div>
        <div>
            <div>
                <h3>8. Big O #5</h3>
                <div>#advanced</div>
            </div>
            <div>
                <p>What is the&nbsp;<code>time complexity</code> (average case) of a jump search in an array of size&nbsp;<code>n</code>, using&nbsp;<code>step = sqrt(n)</code>?</p>
            </div>
            <div>
                <div>
                    <p><strong>Repo:</strong></p>
                    <ul>
                        <li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
                        <li>Directory:&nbsp;<code>0x1E-search_algorithms</code></li>
                        <li>File:&nbsp;<code>101-O</code></li>
                    </ul>
                </div>
            </div>
            <div>
                <div><br></div>
            </div>
        </div>
        <div>
            <div>
                <h3>9. Interpolation search</h3>
                <div>#advanced</div>
            </div>
            <div>
                <p>Write a function that searches for a value in a sorted array of integers using the&nbsp;<a href="https://intranet.alxswe.com/rltoken/cswpABHiyyRmGrPkzsMTyw" title="Interpolation search algorithm" target="_blank">Interpolation search algorithm</a></p>
                <ul>
                    <li>Prototype :&nbsp;<code>int interpolation_search(int *array, size_t size, int value);</code></li>
                    <li>Where&nbsp;<code>array</code> is a pointer to the first element of the array to search in</li>
                    <li><code>size</code> is the number of elements in&nbsp;<code>array</code></li>
                    <li>And&nbsp;<code>value</code> is the value to search for</li>
                    <li>Your function must return the first index where&nbsp;<code>value</code> is located</li>
                    <li>You can assume that&nbsp;<code>array</code> will be sorted in ascending order</li>
                    <li>If&nbsp;<code>value</code> is not present in&nbsp;<code>array</code> or if&nbsp;<code>array</code> is&nbsp;<code>NULL</code>, your function must return&nbsp;<code>-1</code></li>
                    <li>To determine the probe position, you can use :&nbsp;<code>size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]))</code></li>
                    <li>Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)</li>
                </ul>
                <pre><code>wilfried@0x1E-search_algorithms$ cat 102-main.c 
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;search_algos.h&quot;

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 0, 1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 8, 8, 8, 9, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf(&quot;Found %d at index: %d\n\n&quot;, 3, interpolation_search(array, size, 3));
    printf(&quot;Found %d at index: %d\n\n&quot;, 7, interpolation_search(array, size, 7));
    printf(&quot;Found %d at index: %d\n&quot;, 999, interpolation_search(array, size, 999));
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 102-main.c 102-interpolation.c -o 102-interpolation
wilfried@0x1E-search_algorithms$ ./102-interpolation 
Value checked array[6] = [2]
Value checked array[7] = [3]
Found 3 at index: 7

Value checked array[14] = [7]
Found 7 at index: 14

Value checked array[2109] is out of range
Found 999 at index: -1
</code></pre>
            </div>
            <div>
                <div>
                    <p><strong>Repo:</strong></p>
                    <ul>
                        <li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
                        <li>Directory:&nbsp;<code>0x1E-search_algorithms</code></li>
                        <li>File:&nbsp;<code>102-interpolation.c</code></li>
                    </ul>
                </div>
            </div>
            <div>
                <div><br></div>
            </div>
        </div>
        <div>
            <div>
                <h3>10. Exponential search</h3>
                <div>#advanced</div>
            </div>
            <div>
                <p>Write a function that searches for a value in a sorted array of integers using the&nbsp;<a href="https://intranet.alxswe.com/rltoken/J7wng_ddosamvEkFl0ekqA" title="Exponential search algorithm" target="_blank">Exponential search algorithm</a></p>
                <ul>
                    <li>Prototype :&nbsp;<code>int exponential_search(int *array, size_t size, int value);</code></li>
                    <li>Where&nbsp;<code>array</code> is a pointer to the first element of the array to search in</li>
                    <li><code>size</code> is the number of elements in&nbsp;<code>array</code></li>
                    <li>And&nbsp;<code>value</code> is the value to search for</li>
                    <li>Your function must return the first index where&nbsp;<code>value</code> is located</li>
                    <li>You can assume that&nbsp;<code>array</code> will be sorted in ascending order</li>
                    <li>If&nbsp;<code>value</code> is not present in&nbsp;<code>array</code> or if&nbsp;<code>array</code> is&nbsp;<code>NULL</code>, your function must return&nbsp;<code>-1</code></li>
                    <li>You have to use powers of 2 as exponential ranges to search in your array</li>
                    <li>Every time you compare a value in the array to the value you are searching for, you have to print this value (See example)</li>
                    <li>Once you&rsquo;ve found the good range, you need to use a binary search:<ul>
                            <li>Every time you split the array, you have to print the new array (or subarray) you&rsquo;re searching in (See example)</li>
                        </ul>
                    </li>
                </ul>
                <pre><code>wilfried@0x1E-search_algorithms$ cat 103-main.c 
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;search_algos.h&quot;

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 54, 61, 62, 76, 99
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf(&quot;Found %d at index: %d\n\n&quot;, 62, exponential_search(array, size, 62));
    printf(&quot;Found %d at index: %d\n\n&quot;, 3, exponential_search(array, size, 3));
    printf(&quot;Found %d at index: %d\n&quot;, 999, exponential_search(array, size, 999));
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 103-main.c 103-exponential.c -o 103-exponential
wilfried@0x1E-search_algorithms$ ./103-exponential 
Value checked array[1] = [1]
Value checked array[2] = [2]
Value checked array[4] = [4]
Value checked array[8] = [18]
Value found between indexes [8] and [15]
Searching in array: 18, 19, 23, 54, 61, 62, 76, 99
Searching in array: 61, 62, 76, 99
Found 62 at index: 13

Value checked array[1] = [1]
Value checked array[2] = [2]
Value found between indexes [2] and [4]
Searching in array: 2, 3, 4
Found 3 at index: 3

Value checked array[1] = [1]
Value checked array[2] = [2]
Value checked array[4] = [4]
Value checked array[8] = [18]
Value found between indexes [8] and [15]
Searching in array: 18, 19, 23, 54, 61, 62, 76, 99
Searching in array: 61, 62, 76, 99
Searching in array: 76, 99
Searching in array: 99
Found 999 at index: -1
</code></pre>
            </div>
            <div>
                <div>
                    <p><strong>Repo:</strong></p>
                    <ul>
                        <li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
                        <li>Directory:&nbsp;<code>0x1E-search_algorithms</code></li>
                        <li>File:&nbsp;<code>103-exponential.c</code></li>
                    </ul>
                </div>
            </div>
            <div>
                <div><br></div>
            </div>
        </div>
        <div>
            <div>
                <h3>11. Advanced binary search</h3>
                <div>#advanced</div>
            </div>
            <div>
                <p>You may have noticed that the basic binary search does not necessarily return the index of the&nbsp;<em>first</em> value in the array (if this value appears more than once in the array). In this exercise, you&rsquo;ll have to solve this problem.</p>
                <p>Write a function that searches for a value in a sorted array of integers.</p>
                <ul>
                    <li>Prototype :&nbsp;<code>int advanced_binary(int *array, size_t size, int value);</code></li>
                    <li>Where&nbsp;<code>array</code> is a pointer to the first element of the array to search in</li>
                    <li><code>size</code> is the number of elements in&nbsp;<code>array</code></li>
                    <li>And&nbsp;<code>value</code> is the value to search for</li>
                    <li>Your function must return the index where&nbsp;<code>value</code> is located</li>
                    <li>You can assume that&nbsp;<code>array</code> will be sorted in ascending order</li>
                    <li>If&nbsp;<code>value</code> is not present in&nbsp;<code>array</code> or if&nbsp;<code>array</code> is&nbsp;<code>NULL</code>, your function must return&nbsp;<code>-1</code></li>
                    <li>Every time you split the array, you have to print the new array (or subarray) you&rsquo;re searching in (See example)</li>
                    <li>You have to use recursion. You may only use one loop (<code>while</code>,&nbsp;<code>for</code>,&nbsp;<code>do while</code>, etc.) in order to print the array</li>
                </ul>
                <pre><code>wilfried@0x1E-search_algorithms$ cat 104-main.c 
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;search_algos.h&quot;

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 5, 5, 6, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf(&quot;Found %d at index: %d\n\n&quot;, 8, advanced_binary(array, size, 8));
    printf(&quot;Found %d at index: %d\n\n&quot;, 5, advanced_binary(array, size, 5));
    printf(&quot;Found %d at index: %d\n&quot;, 999, advanced_binary(array, size, 999));
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 104-main.c 104-advanced_binary.c -o 104-advanced_binary
wilfried@0x1E-search_algorithms$ ./104-advanced_binary
Searching in array: 0, 1, 2, 5, 5, 6, 6, 7, 8, 9
Searching in array: 6, 6, 7, 8, 9
Searching in array: 8, 9
Found 8 at index: 8

Searching in array: 0, 1, 2, 5, 5, 6, 6, 7, 8, 9
Searching in array: 0, 1, 2, 5, 5
Searching in array: 5, 5
Found 5 at index: 3

Searching in array: 0, 1, 2, 5, 5, 6, 6, 7, 8, 9
Searching in array: 6, 6, 7, 8, 9
Searching in array: 8, 9
Searching in array: 9
Found 999 at index: -1
</code></pre>
            </div>
            <div>
                <div>
                    <p><strong>Repo:</strong></p>
                    <ul>
                        <li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
                        <li>Directory:&nbsp;<code>0x1E-search_algorithms</code></li>
                        <li>File:&nbsp;<code>104-advanced_binary.c</code></li>
                    </ul>
                </div>
            </div>
            <div>
                <div><br></div>
            </div>
        </div>
        <div>
            <div>
                <h3>12. Jump search in a singly linked list</h3>
                <div>#advanced</div>
            </div>
            <div>
                <p>You might think that linear search is not as effective as any other algorithm, right? Well, we should see what happens with a singly linked list.</p>
                <p>Please define the following data structure in your&nbsp;<code>search_algos.h</code> header file:</p>
                <pre><code>/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;
</code></pre>
                <p>Write a function that searches for a value in a sorted list of integers using the Jump search algorithm.</p>
                <ul>
                    <li>Prototype :&nbsp;<code>listint_t *jump_list(listint_t *list, size_t size, int value);</code></li>
                    <li>Where&nbsp;<code>list</code> is a pointer to the head of the list to search in</li>
                    <li><code>size</code> is the number of nodes in&nbsp;<code>list</code></li>
                    <li>And&nbsp;<code>value</code> is the value to search for</li>
                    <li>Your function must return a pointer to the first node where&nbsp;<code>value</code> is located</li>
                    <li>You can assume that&nbsp;<code>list</code> will be sorted in ascending order</li>
                    <li>If&nbsp;<code>value</code> is not present in&nbsp;<code>head</code> or if&nbsp;<code>head</code> is&nbsp;<code>NULL</code>, your function must return&nbsp;<code>NULL</code></li>
                    <li>You have to use the square root of the size of the list as the jump step.</li>
                    <li>You can use the&nbsp;<code>sqrt()</code> function included in&nbsp;<code>&lt;math.h&gt;</code> (don&rsquo;t forget to compile with -lm)</li>
                    <li>Every time you compare a value in the list to the value you are searching, you have to print this value (see example)</li>
                </ul>
                <p>NOTE:&nbsp;<a href="https://intranet.alxswe.com/rltoken/7EwC08L6K_vQyI2wknLvnQ" title="You can find here" target="_blank">You can find here</a> the functions used in the example. You don&rsquo;t need to push them, we will compile your file with our own implementation during the correction.</p>
                <pre><code>wilfried@0x1E-search_algorithms$ cat 105-main.c 
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;search_algos.h&quot;

listint_t *create_list(int *array, size_t size);
void print_list(const listint_t *list);
void free_list(listint_t *list);

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    listint_t *list, *res;
    int array[] = {
        0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 53, 61, 62, 76, 99
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    list = create_list(array, size);
    print_list(list);

    res =  jump_list(list, size, 53);
    printf(&quot;Found %d at index: %lu\n\n&quot;, 53, res-&gt;index);
    res =  jump_list(list, size, 2);
    printf(&quot;Found %d at index: %lu\n\n&quot;, 2, res-&gt;index);
    res =  jump_list(list, size, 999);
    printf(&quot;Found %d at index: %p\n&quot;, 999, (void *) res);

    free_list(list);
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 105-main.c 105-jump_list.c listint/*.c -lm -o 105-jump
wilfried@0x1E-search_algorithms$ ./105-jump 
List :
Index[0] = [0]
Index[1] = [1]
Index[2] = [2]
Index[3] = [3]
Index[4] = [4]
Index[5] = [7]
Index[6] = [12]
Index[7] = [15]
Index[8] = [18]
Index[9] = [19]
Index[10] = [23]
Index[11] = [53]
Index[12] = [61]
Index[13] = [62]
Index[14] = [76]
Index[15] = [99]

Value checked at index [4] = [4]
Value checked at index [8] = [18]
Value checked at index [12] = [61]
Value found between indexes [8] and [12]
Value checked at index [8] = [18]
Value checked at index [9] = [19]
Value checked at index [10] = [23]
Value checked at index [11] = [53]
Found 53 at index: 11

Value checked at index [4] = [4]
Value found between indexes [0] and [4]
Value checked at index [0] = [0]
Value checked at index [1] = [1]
Value checked at index [2] = [2]
Found 2 at index: 2

Value checked at index [4] = [4]
Value checked at index [8] = [18]
Value checked at index [12] = [61]
Value checked at index [15] = [99]
Value found between indexes [12] and [15]
Value checked at index [12] = [61]
Value checked at index [13] = [62]
Value checked at index [14] = [76]
Value checked at index [15] = [99]
Found 999 at index: (nil)
</code></pre>
            </div>
            <div>
                <div>
                    <p><strong>Repo:</strong></p>
                    <ul>
                        <li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
                        <li>Directory:&nbsp;<code>0x1E-search_algorithms</code></li>
                        <li>File:&nbsp;<code>105-jump_list.c</code></li>
                    </ul>
                </div>
            </div>
            <div>
                <div><br></div>
            </div>
        </div>
        <div>
            <div>
                <h3>13. Linear search in a skip list</h3>
                <div>#advanced</div>
            </div>
            <div>
                <p>As you see now, looking for a specific value in a singly linked list always leads to browse every element of the list. A common way to optimize the time complexity of a search in a singly linked list is to modify the list itself by adding an &ldquo;express lane&rdquo; to browse it. A linked list with an express lane is called a&nbsp;<a href="https://intranet.alxswe.com/rltoken/SD8K3P6iYfmYTq39XZzo_Q" title="skip list" target="_blank">skip list</a>. This change does not come without consequences. Indeed, the space complexity of a search in this kind of list will grow as&nbsp;<code>sizeof(skiplist_t) &gt; sizeof(listint_t)</code> (see example below).</p>
                <p>Please define the following data structure in your&nbsp;<code>search_algos.h</code> header file:</p>
                <pre><code>/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;
</code></pre>
                <p>Write a function that searches for a value in a sorted skip list of integers.</p>
                <ul>
                    <li>Prototype :&nbsp;<code>skiplist_t *linear_skip(skiplist_t *list, int value);</code></li>
                    <li>Where&nbsp;<code>list</code> is a pointer to the head of the skip list to search in</li>
                    <li>A node of the express lane is placed every index which is a multiple of the square root of the size of the list (see example below)</li>
                    <li>And&nbsp;<code>value</code> is the value to search for</li>
                    <li>You can assume that&nbsp;<code>list</code> will be sorted in ascending order</li>
                    <li>Your function must return a pointer on the first node where&nbsp;<code>value</code> is located</li>
                    <li>If&nbsp;<code>value</code> is not present in&nbsp;<code>list</code> or if&nbsp;<code>head</code> is&nbsp;<code>NULL</code>, your function must return&nbsp;<code>NULL</code></li>
                    <li>Every time you compare a value in the list to the value you are searching, you have to print this value (see example below)</li>
                </ul>
                <p>NOTE:&nbsp;<a href="https://intranet.alxswe.com/rltoken/Br9jXygWf5gbgGxZI45ukA" title="You can find here" target="_blank">You can find here</a> the functions used in the example. You don&rsquo;t need to push them, we will compile your file with our own implementation during the correction.</p>
                <pre><code>wilfried@0x1E-search_algorithms$ cat 106-main.c 
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &quot;search_algos.h&quot;

skiplist_t *create_skiplist(int *array, size_t size);
void print_skiplist(const skiplist_t *list);
void free_skiplist(skiplist_t *list);

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    skiplist_t *list, *res;
    int array[] = {
        0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 53, 61, 62, 76, 99
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    list = create_skiplist(array, size);
    print_skiplist(list);

    res =  linear_skip(list, 53);
    printf(&quot;Found %d at index: %lu\n\n&quot;, 53, res-&gt;index);
    res =  linear_skip(list, 2);
    printf(&quot;Found %d at index: %lu\n\n&quot;, 2, res-&gt;index);
    res =  linear_skip(list, 999);
    printf(&quot;Found %d at index: %p\n&quot;, 999, (void *) res);

    free_skiplist(list);
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 106-main.c 106-linear_skip.c skiplist/*.c -lm -o 106-linear
wilfried@0x1E-search_algorithms$ ./106-linear 
List :
Index[0] = [0]
Index[1] = [1]
Index[2] = [2]
Index[3] = [3]
Index[4] = [4]
Index[5] = [7]
Index[6] = [12]
Index[7] = [15]
Index[8] = [18]
Index[9] = [19]
Index[10] = [23]
Index[11] = [53]
Index[12] = [61]
Index[13] = [62]
Index[14] = [76]
Index[15] = [99]

Express lane :
Index[0] = [0]
Index[4] = [4]
Index[8] = [18]
Index[12] = [61]

Value checked at index [4] = [4]
Value checked at index [8] = [18]
Value checked at index [12] = [61]
Value found between indexes [8] and [12]
Value checked at index [8] = [18]
Value checked at index [9] = [19]
Value checked at index [10] = [23]
Value checked at index [11] = [53]
Found 53 at index: 11

Value checked at index [4] = [4]
Value found between indexes [0] and [4]
Value checked at index [0] = [0]
Value checked at index [1] = [1]
Value checked at index [2] = [2]
Found 2 at index: 2

Value checked at index [4] = [4]
Value checked at index [8] = [18]
Value checked at index [12] = [61]
Value found between indexes [12] and [15]
Value checked at index [12] = [61]
Value checked at index [13] = [62]
Value checked at index [14] = [76]
Value checked at index [15] = [99]
Found 999 at index: (nil)
</code></pre>
            </div>
            <div>
                <div>
                    <p><strong>Repo:</strong></p>
                    <ul>
                        <li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
                        <li>Directory:&nbsp;<code>0x1E-search_algorithms</code></li>
                        <li>File:&nbsp;<code>106-linear_skip.c</code></li>
                    </ul>
                </div>
            </div>
            <div>
                <div><br></div>
            </div>
        </div>
        <div>
            <div>
                <h3>14. Big O #6</h3>
                <div>#advanced</div>
            </div>
            <div>
                <p>What is the&nbsp;<code>time complexity</code> (average case) of a jump search in a singly linked list of size&nbsp;<code>n</code>, using&nbsp;<code>step = sqrt(n)</code>?</p>
            </div>
            <div>
                <div>
                    <p><strong>Repo:</strong></p>
                    <ul>
                        <li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
                        <li>Directory:&nbsp;<code>0x1E-search_algorithms</code></li>
                        <li>File:&nbsp;<code>107-O</code></li>
                    </ul>
                </div>
            </div>
        </div>
        <div>
            <div>
                <h3>15. Big O #7</h3>
                <div>#advanced</div>
            </div>
            <div>
                <p>What is the&nbsp;<code>time complexity</code> (average case) of a jump search in a skip list of size&nbsp;<code>n</code>, with an express lane using&nbsp;<code>step = sqrt(n)</code>?</p>
            </div>
            <div>
                <div>
                    <p><strong>Repo:</strong></p>
                    <ul>
                        <li>GitHub repository:&nbsp;<code>alx-low_level_programming</code></li>
                        <li>Directory:&nbsp;<code>0x1E-search_algorithms</code></li>
                        <li>File:&nbsp;<code>108-O</code></li>
                    </ul>
                </div>
            </div>
            <div>
                <div><br></div>
            </div>
        </div>
    </article>
    <div>Copyright &copy; 2023 DUKURMA, All rights reserved.</div>
</main>
<main>
    <article>
        <div>
            <div><br></div>
        </div>
    </article>
</main>
