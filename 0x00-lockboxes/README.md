<h1 class="gap">0x00. Lockboxes</h1>
<div data-react-class="tags/Tags" data-react-props="{&quot;tags&quot;:[]}" data-react-cache-id="tags/Tags-0">&nbsp;</div>
<div data-react-class="projects/ProjectMetadata" data-react-props="{&quot;metadata&quot;:{&quot;author&quot;:&quot;Carrie Ybay, Software Engineer at Holberton School&quot;,&quot;weight&quot;:1,&quot;correction&quot;:{&quot;released&quot;:true,&quot;auto_correction_available_at&quot;:&quot;2022-12-07T00:00:00.000-05:00&quot;,&quot;requires_auto_correction&quot;:true,&quot;requires_manual_correction&quot;:false},&quot;bpi&quot;:{&quot;current&quot;:true,&quot;started&quot;:false,&quot;in_second_deadline&quot;:false,&quot;starts_at&quot;:&quot;2022-12-05T00:00:00.000-05:00&quot;,&quot;ends_at&quot;:&quot;2022-12-09T00:00:00.000-05:00&quot;,&quot;second_deadline_at&quot;:&quot;2022-12-12T00:00:00.000-05:00&quot;}}}" data-react-cache-id="projects/ProjectMetadata-0">
<ul id="project-metadata" class="list-group metadata">
<li class="list-group-item">&nbsp;By:&nbsp;Carrie Ybay, Software Engineer at Holberton School</li>
<li class="list-group-item">&nbsp;Weight:&nbsp;1</li>
<li class="list-group-item">&nbsp;Project will start&nbsp;<span title="" data-container="body" data-html="false" data-placement="auto top" data-toggle="tooltip" data-original-title="2022-12-05 00:00 (GMT-05:00)"><span class="datetime">Dec 5, 2022 12:00 AM</span></span>, must end by&nbsp;<span title="" data-container="body" data-html="false" data-placement="auto top" data-toggle="tooltip" data-original-title="2022-12-09 00:00 (GMT-05:00)"><span class="datetime">Dec 9, 2022 12:00 AM</span></span></li>
<li class="list-group-item">&nbsp;was&nbsp;released at&nbsp;<span title="" data-container="body" data-html="false" data-placement="auto top" data-toggle="tooltip" data-original-title="2022-12-07 00:00 (GMT-05:00)"><span class="datetime">Dec 7, 2022 12:00 AM</span></span></li>
<li class="list-group-item">&nbsp;An auto review will be launched at the deadline</li>
</ul>
</div>
<div id="project-description" class="panel panel-default">
<div class="panel-body">
<h2>Requirements</h2>
<h3>General</h3>
<ul>
<li>Allowed editors:&nbsp;<code>vi</code>,&nbsp;<code>vim</code>,&nbsp;<code>emacs</code></li>
<li>All your files will be interpreted/compiled on Ubuntu 14.04 LTS using&nbsp;<code>python3</code>&nbsp;(version 3.4.3)</li>
<li>All your files should end with a new line</li>
<li>The first line of all your files should be exactly&nbsp;<code>#!/usr/bin/python3</code></li>
<li>A&nbsp;<code>README.md</code>&nbsp;file, at the root of the folder of the project, is mandatory</li>
<li>Your code should be documented</li>
<li>Your code should use the&nbsp;<code>PEP 8</code>&nbsp;style (version 1.7.x)</li>
<li>All your files must be executable</li>
</ul>
</div>
</div>
<h2 class="gap">Tasks</h2>
<div id="task-num-0" data-role="task3764" data-position="1">
<div id="task-3764" class="panel panel-default task-card "><span id="user_id" data-id="4765"></span>
<div class="panel-heading panel-heading-actions">
<h3 class="panel-title">0. Lockboxes</h3>
<div><span class="label label-info">mandatory</span></div>
</div>
<div class="panel-body"><span id="user_id" data-id="4765"></span>
<p>You have&nbsp;<code>n</code>&nbsp;number of locked boxes in front of you. Each box is numbered sequentially from&nbsp;<code>0</code>&nbsp;to&nbsp;<code>n - 1</code>&nbsp;and each box may contain keys to the other boxes.</p>
<p>Write a method that determines if all the boxes can be opened.</p>
<ul>
<li>Prototype:&nbsp;<code>def canUnlockAll(boxes)</code></li>
<li><code>boxes</code>&nbsp;is a list of lists</li>
<li>A key with the same number as a box opens that box</li>
<li>You can assume all keys will be positive integers
<ul>
<li>There can be keys that do not have boxes</li>
</ul>
</li>
<li>The first box&nbsp;<code>boxes[0]</code>&nbsp;is unlocked</li>
<li>Return&nbsp;<code>True</code>&nbsp;if all boxes can be opened, else return&nbsp;<code>False</code></li>
</ul>
<pre><code>carrie@ubuntu:~/0x00-lockboxes$ cat main_0.py
#!/usr/bin/python3

canUnlockAll = __import__('0-lockboxes').canUnlockAll

boxes = [[1], [2], [3], [4], []]
print(canUnlockAll(boxes))

boxes = [[1, 4, 6], [2], [0, 4, 1], [5, 6, 2], [3], [4, 1], [6]]
print(canUnlockAll(boxes))

boxes = [[1, 4], [2], [0, 4, 1], [3], [], [4, 1], [5, 6]]
print(canUnlockAll(boxes))

carrie@ubuntu:~/0x00-lockboxes$
</code></pre>
<pre><code>carrie@ubuntu:~/0x00-lockboxes$ ./main_0.py
True
True
False
carrie@ubuntu:~/0x00-lockboxes$
</code></pre>
</div>
<div class="list-group">
<div class="list-group-item">
<p><strong>Repo:</strong></p>
<ul>
<li>GitHub repository:&nbsp;<code>holbertonschool-interview</code></li>
<li>Directory:&nbsp;<code>0x00-lockboxes</code></li>
<li>File:&nbsp;<code>0-lockboxes.py</code></li>
</ul>
</div>
</div>
<div class="panel-footer">
<div class="align-items-center d-flex justify-content-between">
<div><button class="student_task_done btn btn-default btn-sm no" data-task-id="3764">&nbsp;Done<span class="no pending">?</span></button>&nbsp;<button class="student-task-done-by btn btn-default btn-sm" data-task-id="3764" data-batch-id="235" data-toggle="modal" data-target="#task-3764-users-done-modal">Help</button>&nbsp;</div>
</div>
</div>
</div>
</div>