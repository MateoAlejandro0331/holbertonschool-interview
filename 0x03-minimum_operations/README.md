<h1>0x03. Minimum Operations</h1>
<div><br></div>
<div>
    <ul>
        <li>&nbsp;By:&nbsp;Carrie Ybay, Software Engineer at Holberton School</li>
        <li>&nbsp;Weight:&nbsp;1</li>
        <li>&nbsp;Project will start&nbsp;<span title="">Jan 2, 2023 12:00 AM</span>, must end by&nbsp;<span title="">Jan 6, 2023 12:00 AM</span></li>
        <li>&nbsp;was&nbsp;released at&nbsp;<span title="">Jan 4, 2023 12:00 AM</span></li>
        <li>&nbsp;An auto review will be launched at the deadline</li>
    </ul>
</div>
<div>
    <div>
        <h2>Requirements</h2>
        <h3>General</h3>
        <ul>
            <li>Allowed editors:&nbsp;<code>vi</code>,&nbsp;<code>vim</code>,&nbsp;<code>emacs</code></li>
            <li>All your files will be interpreted/compiled on Ubuntu 14.04 LTS using&nbsp;<code>python3</code> (version 3.4.3)</li>
            <li>All your files should end with a new line</li>
            <li>The first line of all your files should be exactly&nbsp;<code>#!/usr/bin/python3</code></li>
            <li>A&nbsp;<code>README.md</code> file, at the root of the folder of the project, is mandatory</li>
            <li>Your code should be documented</li>
            <li>Your code should use the&nbsp;<code>PEP 8</code> style (version 1.7.x)</li>
            <li>All your files must be executable</li>
        </ul>
    </div>
</div>
<h2>Tasks</h2>
<div>
    <div>
        <div>
            <h3>0. Minimum Operations</h3>
            <div>mandatory</div>
        </div>
        <div>
            <p>In a text file, there is a single character&nbsp;<code>H</code>. Your text editor can execute only two operations in this file:&nbsp;<code>Copy All</code> and&nbsp;<code>Paste</code>. Given a number&nbsp;<code>n</code>, write a method that calculates the fewest number of operations needed to result in exactly&nbsp;<code>n</code> <code>H</code> characters in the file.</p>
            <ul>
                <li>Prototype:&nbsp;<code>def minOperations(n)</code></li>
                <li>Returns an integer</li>
                <li>If&nbsp;<code>n</code> is impossible to achieve, return&nbsp;<code>0</code></li>
            </ul>
            <p><strong>Example:</strong></p>
            <p><code>n = 9</code></p>
            <p><code>H</code> =&gt;&nbsp;<code>Copy All</code> =&gt;&nbsp;<code>Paste</code> =&gt;&nbsp;<code>HH</code> =&gt;&nbsp;<code>Paste</code> =&gt;<code>HHH</code> =&gt;&nbsp;<code>Copy All</code> =&gt;&nbsp;<code>Paste</code> =&gt;&nbsp;<code>HHHHHH</code> =&gt;&nbsp;<code>Paste</code> =&gt;&nbsp;<code>HHHHHHHHH</code></p>
            <p>Number of operations:&nbsp;<code>6</code></p>
            <pre><code>carrie@ubuntu:~/0x03-minoperations$ cat 0-main.py
#!/usr/bin/python3
&quot;&quot;&quot;
Main file for testing
&quot;&quot;&quot;

minOperations = __import__(&apos;0-minoperations&apos;).minOperations

n = 4
print(&quot;Min # of operations to reach {} char: {}&quot;.format(n, minOperations(n)))

n = 12
print(&quot;Min # of operations to reach {} char: {}&quot;.format(n, minOperations(n)))

carrie@ubuntu:~/0x03-minoperations$
</code></pre>
            <pre><code>carrie@ubuntu:~/0x03-minoperations$ ./0-main.py
Min number of operations to reach 4 characters: 4
Min number of operations to reach 12 characters: 7
carrie@ubuntu:~/0x03-minoperations$
</code></pre>
        </div>
        <div>
            <div>
                <p><strong>Repo:</strong></p>
                <ul>
                    <li>GitHub repository:&nbsp;<code>holbertonschool-interview</code></li>
                    <li>Directory:&nbsp;<code>0x03-minimum_operations</code></li>
                    <li>File:&nbsp;<code>0-minoperations.py</code></li>
                </ul>
            </div>
        </div>
        <div>
            <div>
                <div><button>&nbsp;Done?</button> <button>Help</button>&nbsp;</div>
            </div>
        </div>
    </div>
</div>