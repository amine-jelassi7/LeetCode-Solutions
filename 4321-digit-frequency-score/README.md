<h2><a href="https://leetcode.com/problems/digit-frequency-score">4321. Digit Frequency Score</a></h2><h3>Easy</h3><hr><p>You are given an integer <code>n</code>.</p>

<p>The <strong>score</strong> of <code>n</code> is defined as the <strong>sum</strong> of <code>d * freq(d)</code> over all <strong>distinct</strong> digits <code>d</code>, where <code>freq(d)</code> denotes the number of times the digit <code>d</code> appears in <code>n</code>.</p>

<p>Return an integer denoting the score of <code>n</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 122</span></p>

<p><strong>Output:</strong> <span class="example-io">5</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>The digit 1 appears 1 time, contributing <code>1 * 1 = 1</code>.</li>
	<li>The digit 2 appears 2 times, contributing <code>2 * 2 = 4</code>.</li>
	<li>Thus, the score of <code>n</code> is <code>1 + 4 = 5</code>.</li>
</ul>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">n = 101</span></p>

<p><strong>Output:</strong> <span class="example-io">2</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>The digit 0 appears 1 time, contributing <code>0 * 1 = 0</code>.</li>
	<li>The digit 1 appears 2 times, contributing <code>1 * 2 = 2</code>.</li>
	<li>Thus, the score of <code>n</code> is 2.</li>
</ul>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>9</sup></code></li>
</ul>
