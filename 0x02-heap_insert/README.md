<h1>x02. Heap Insert</h1>
<div><br></div>
<div>
    <ul>
        <li>&nbsp;By:&nbsp;Alexa Orrico, Software Engineer at Holberton School</li>
        <li>&nbsp;Weight:&nbsp;1</li>
        <li>&nbsp;Project will start&nbsp;<span title="">Dec 19, 2022 12:00 AM</span>, must end by&nbsp;<span title="">Dec 23, 2022 12:00 AM</span></li>
        <li>&nbsp;was&nbsp;released at&nbsp;<span title="">Dec 21, 2022 12:00 AM</span></li>
        <li>&nbsp;An auto review will be launched at the deadline</li>
    </ul>
</div>
<div>
    <div>
        <h2>Requirements</h2>
        <h3>General</h3>
        <ul>
            <li>Allowed editors:&nbsp;<code>vi</code>,&nbsp;<code>vim</code>,&nbsp;<code>emacs</code></li>
            <li>All your files will be compiled on Ubuntu 14.04 LTS</li>
            <li>Your programs and functions will be compiled with&nbsp;<code>gcc 4.8.4</code> using the flags&nbsp;<code>-Wall</code> <code>-Werror</code> <code>-Wextra</code> and&nbsp;<code>-pedantic</code></li>
            <li>All your files should end with a new line</li>
            <li>A&nbsp;<code>README.md</code> file, at the root of the folder of the project, is mandatory</li>
            <li>Your code should use the&nbsp;<code>Betty</code> style. It will be checked using&nbsp;<a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" target="_blank" title="betty-style.pl">betty-style.pl</a> and&nbsp;<a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" target="_blank" title="betty-doc.pl">betty-doc.pl</a></li>
            <li>You are not allowed to use global variables</li>
            <li>No more than 5 functions per file</li>
            <li>You are allowed to use the standard library</li>
            <li>In the following examples, the&nbsp;<code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own&nbsp;<code>main.c</code> files at compilation. Our&nbsp;<code>main.c</code> files might be different from the one shown in the examples</li>
            <li>The prototypes of all your functions should be included in your header file called&nbsp;<code>binary_trees.h</code></li>
            <li>Don&rsquo;t forget to push your header file</li>
            <li>All your header files should be include guarded</li>
        </ul>
        <h2>More Info</h2>
        <h3>Data structures</h3>
        <p>Please use the following data structures and types for binary trees. Don&rsquo;t forget to include them in your header file.</p>
        <h4>Basic Binary Tree</h4>
        <pre><code>/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};
</code></pre>
        <h4>Max Binary Heap</h4>
        <pre><code>typedef struct binary_tree_s heap_t;
</code></pre>
        <h3>Print function</h3>
        <p>To match the examples in the tasks, you are given&nbsp;<a href="https://github.com/holbertonschool/0x1C.c" target="_blank" title="this function">this function</a></p>
        <p>This function is used only for visualisation purpose. You don&rsquo;t have to push it to your repo. It may not be used during the correction</p>
    </div>
</div>