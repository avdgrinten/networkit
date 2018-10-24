<section class="Top_Section" style="clear: both; border-bottom: 1px solid #d4d7d9;">
   <div class="Top_Section" style="padding-top: 30px; padding-bottom: 30px">
     <div class="Introduction_Text" style="border-right: 1px solid #d4d7d9; display: table-cell; width: 66.66%; padding-right: 30px; text-align: justify">
**NetworKit** is a growing open-source toolkit for large-scale network
analysis. Its aim is to provide tools for the analysis of large networks
in the size range from thousands to billions of edges. For this purpose,
it implements efficient graph algorithms, many of them parallel to
utilize multicore architectures. These are meant to compute standard
measures of network analysis, such as degree sequences, clustering
coefficients, and centrality measures. In this respect, NetworKit is
comparable to packages such as NetworkX, albeit with a focus on
parallelism and scalability. NetworKit is also a testbed for algorithm
engineering and contains novel algorithms from recently published
research (see list of publications).

**NetworKit** is a Python module. Performance-aware algorithms are
written in C++ (often using OpenMP for shared-memory parallelism) and
exposed to Python via the Cython toolchain. Python in turn gives us the
ability to work interactively and with a rich environment of tools for
data analysis. Furthermore, NetworKit's core can be built and used as a
native library.

<p style="text-align: left; font-size:14pt; padding-top: 15px;">Latest News</p>
<div style="float: left; display: table-cell; width: 80%; padding-right: 30px">
news-1

</div>

<div style="display: table-cell; width: 20%; padding-left: 30px">
  <p style="word-break: normal">
    <a href="news.html">All News</a>
  </p>
</div>
> &lt;/div&gt; &lt;div class="Downloads" style="display: table-cell;
> width: 33.33%; padding-left: 30px"&gt; &lt;div&gt;Clone from
> GitHub&lt;/div&gt; &lt;span style="display: block;overflow:
> hidden;"&gt;&lt;input onClick="this.setSelectionRange(0,
> this.value.length)" style="width: 100%" type="text" value="git clone
> <https://github.com/kit-parco/networkit.git>"
> readonly=""/&gt;&lt;/span&gt;
>
> > &lt;div style="padding-top: 15px"&gt;Install via pip3&lt;/div&gt;
> > &lt;span style="display: block;overflow: hidden;"&gt;&lt;input
> > onClick="this.setSelectionRange(0, this.value.length)" style="width:
> > 100%" type="text" value="pip3 install networkit"
> > readonly=""/&gt;&lt;/span&gt;
> >
> > &lt;div style="padding-top: 15px"&gt;Download as &lt;a
> > href="<https://networkit.iti.kit.edu/uploads/networkit.zip>"&gt;zip
> > file&lt;/a&gt;&lt;/div&gt;
> >
> > &lt;div style="padding-top: 15px"&gt;Download the &lt;a
> > href="<https://networkit.iti.kit.edu/uploads/networkit-documentation.zip>"&gt;Class
> > Documentation&lt;/a&gt;&lt;/div&gt;
> >
> > &lt;div style="padding-top: 15px"&gt;Download the &lt;a
> > href="<http://arxiv.org/pdf/1403.3005v3.pdf>"&gt;Technical
> > Report&lt;/a&gt;&lt;/div&gt;
> >
> > &lt;div style="padding-top: 15px;"&gt; &lt;div style="float:
> > left;"&gt;Mailing List&lt;/div&gt; &lt;div&gt;&lt;a
> > style="padding-left: 10px"
> > href="<https://lists.uni-koeln.de/mailman/listinfo/networkit>"&gt;&lt;img
> > style="padding-bottom:2px"
> > src="\_static/mailinglist.png"&gt;&lt;/a&gt; &lt;/div&gt;
> > &lt;/div&gt;
> >
> > &lt;div style="padding-top: 15px"&gt;View the &lt;a
> > href="<https://lists.uni-koeln.de/pipermail/networkit/>"&gt;mailing
> > list archive&lt;/a&gt;&lt;/div&gt;
> >
> > &lt;div style="padding-top: 15px"&gt;&lt;a
> > href="<http://nbviewer.ipython.org/urls/networkit.iti.kit.edu/uploads/docs/NetworKit_UserGuide.ipynb>"&gt;NetworKit
> > UserGuide&lt;/a&gt;&lt;/div&gt;
>
> &lt;/div&gt;

> &lt;/div&gt;

> &lt;/section&gt;
>
> &lt;section class="MainFeatures" style="clear: both; padding-top: 20px; padding-bottom: 0px;"&gt;
>
> :   
>
>     &lt;div class="FeatureTable" &gt;
>
>     :   &lt;div style="text-align: center; font-size:16pt;
>         font-weight: bold; padding-bottom: 20px;"&gt;Main Design
>         Goals&lt;/div&gt; &lt;div style="border-right: 1px solid
>         \#d4d7d9; display: table-cell; width: 33.33%; padding: 20px;
>         padding-bottom: 0px;"&gt; &lt;p style="text-align: center;
>         font-size:14pt"&gt;Interactive Workflow&lt;/p&gt; &lt;p
>         style="word-break: normal; text-align:justify;"&gt; NetworKit
>         takes inspiration from other software like R, MATLAB or
>         Mathematica and provides an interactive shell via Python. This
>         allows users to freely combine functions from NetworKit and
>         also use the results with other popular Python packages. In
>         combination with Jupyter Notebook, NetworKit provides an
>         intuitive computing environment for scientific workflows, even
>         on a remote compute server. &lt;/p&gt; &lt;/div&gt;
>
>         &lt;div style="border-right: 1px solid \#d4d7d9; display: table-cell; width: 33.33%; padding: 20px; padding-bottom: 0px;"&gt;
>
>         :   &lt;p style="text-align: center; font-size:14pt"&gt;High
>             Performance&lt;/p&gt; &lt;p style="word-break: normal;
>             text-align:justify;"&gt; In NetworKit, algorithms and data
>             structures are selected and implemented with a combination
>             of good software engineering as well as high performance
>             and parallelism in mind. Some implementations are among
>             the fastest in published research. For example, community
>             detection in a 3 billion edge web graph can be performed
>             on a 16-core server in a matter of a few minutes.
>             &lt;/p&gt;
>
>         &lt;/div&gt;
>
>         &lt;div style="display: table-cell; width: 33.33%; padding: 20px; padding-bottom: 0px;"&gt;
>
>         :   &lt;p style="text-align: center; font-size:14pt"&gt;Easy
>             Integration&lt;/p&gt; &lt;p style="word-break: normal;
>             text-align:justify;"&gt; As a Python module, NetworKit
>             enables seamless integration with Python libraries for
>             scientific computing and data analysis, e.g. pandas for
>             data framework processing and analytics, matplotlib for
>             plotting, networkx for additional network analysis tasks,
>             or numpy and scipy for numerical and scientific computing.
>             Furthermore, NetworKit aims to support a variety of
>             input/output formats. &lt;/p&gt;
>
>         &lt;/div&gt;
>
>     &lt;/div&gt;
>
> &lt;/section&gt;
>
> &lt;section class="FeatureImages" style="clear: both; padding-top: 0px; padding-bottom: 0px;"&gt;
>
> :   
>
>     &lt;div class="FeatureTable" &gt;
>
>     :   
>
>         &lt;div style="border-right: 1px solid \#d4d7d9; display: table-cell; width: 33.33%; padding: 20px; padding-bottom: 0px;"&gt;
>
>         :   &lt;div style="border-top: 1px solid \#d4d7d9;
>             margin-left: 40px; margin-right: 40px; padding-bottom:
>             30px;"&gt;&lt;/div&gt;
>
``` {.sourceCode .python}
from networkit import *
G = readGraph("skitter.graph", Format.METIS)
print(G.toString())
```

<pre class="codeSpan">'Graph(name=skitter, n=1696415, m=11095298)'</pre>
``` {.sourceCode .python}
cc = components.ConnectedComponents(G)
cc.run()
compSizes = cc.getComponentSizes()
numCC = len(compSizes)
maxCC = max(compSizes.values())
print("#cc = %d,largest = %d"%(numCC,maxCC))
```

<pre class="codeSpan">#cc = 756,largest = 1694616</pre>
> &lt;/div&gt;
>
> &lt;div style="border-right: 1px solid \#d4d7d9; display: table-cell; width: 33.33%; padding: 20px; padding-bottom: 0px;"&gt;
>
> :   &lt;div style="border-top: 1px solid \#d4d7d9; margin-left: 40px;
>     margin-right: 40px; padding-bottom: 30px;"&gt;&lt;/div&gt;
>
``` {.sourceCode .python}
communities = community.detectCommunities(G)
```

<pre class="codeSpan" style="padding: 8px;">
> PLM(balanced,pc) detected communities in 17.86 \[s\] solution
> properties: ------------------- -------------\# communities 1637 min
> community size 2 max community size 233061 avg. community size 1036.3
> modularity 0.825245 ------------------- ------------- &lt;/pre&gt;
> &lt;/div&gt;
>
> > &lt;div style="display: table-cell; width: 33.33%; padding: 20px; padding-bottom: 0px;"&gt;
> >
> > :   &lt;div style="border-top: 1px solid \#d4d7d9; margin-left:
> >     40px; margin-right: 40px; padding-bottom: 30px;"&gt;&lt;/div&gt;
> >
``` {.sourceCode .python}
%matplotlib inline
import matplotlib.pyplot as plt
sizes = communities.subsetSizes()
sizes.sort(reverse=True)
plt.xscale("log")
plt.xlabel("community id")
plt.yscale("log")
plt.ylabel("size")
plt.show()
```

</div>
> &lt;/div&gt;

> &lt;/section&gt;
>
> &lt;section class="ExampleTexts" style="clear: both; padding-top: 0px; padding-bottom: 20px;"&gt;
>
> :   
>
>     &lt;div class="FeatureTable" &gt;
>
>     :   
>
>         &lt;div style="border-right: 1px solid \#d4d7d9; display: table-cell; width: 33.33%; padding: 20px; padding-bottom: 0px;"&gt;
>
>         :   &lt;div style="border-top: 1px solid \#d4d7d9;
>             margin-left: 40px; margin-right: 40px; padding-bottom:
>             30px;"&gt;&lt;/div&gt; &lt;p style="word-break: normal;
>             text-align:justify;"&gt; Using NetworKit is as simple as
>             importing the networkit Python package. In the example
>             above, we then read a network of autonomous systems from
>             disk and print some very basic statistics about
>             the network. We go on by computing the connected
>             components and outputting their number and size.
>             &lt;/p&gt;
>
>         &lt;/div&gt;
>
>         &lt;div style="border-right: 1px solid \#d4d7d9; display: table-cell; width: 33.33%; padding: 20px; padding-bottom: 0px;"&gt;
>
>         :   &lt;div style="border-top: 1px solid \#d4d7d9;
>             margin-left: 40px; margin-right: 40px; padding-bottom:
>             30px;"&gt;&lt;/div&gt; &lt;p style="word-break: normal;
>             text-align:justify;"&gt; Continuing with the example on
>             the left, we tell NetworKit to detect communities for the
>             &lt;i&gt;skitter&lt;/i&gt; network. Thanks to our parallel
>             modularity-driven community detection algorithms, this
>             takes only about 18 seconds on a consumer notebook even
>             though the network has more than 11 million edges.
>             &lt;/p&gt;
>
>         &lt;/div&gt;
>
>         &lt;div style="display: table-cell; width: 33.33%; padding: 20px; padding-bottom: 0px;"&gt;
>
>         :   &lt;div style="border-top: 1px solid \#d4d7d9;
>             margin-left: 40px; margin-right: 40px; padding-bottom:
>             30px;"&gt;&lt;/div&gt; &lt;p style="word-break: normal;
>             text-align:justify;"&gt; Visualizing the size of the
>             communities computed in the example in the middle is very
>             easy due to the seamless integration of NetworKit into the
>             Python ecosystem. We use matplotlib to plot a log-log
>             graph of the community sizes sorted in descending order.
>             When using Jupyter Notebook the resulting plot appears
>             directly below the plot command. &lt;/p&gt;
>
>         &lt;/div&gt;
>
>     &lt;/div&gt;
>
> &lt;/section&gt;
