<template>
  <div c="2" class="adj">
    <Suspense timeout="2" v-bind:x="1" :a="1" b="3">
      <div>ass</div>
    </Suspense>
    <component is="dog">sss</component>
  </div>
</template>
<script lang="tsx">
const ax: number = 1;
console.log(ax);
function x(axd: string) {
  console.log(ax);
}
</script>

<script>
const a = 1;
function dome() {}
const ax = <div>as</div>;
class Dog {
  constructor(ax) {
    console.log(ax);
  }
  getD() {
    console.log(a);
  }
}
</script>

<style lang="scss">
@mixin asd($a: red) {
  xasd {
    background: #000;
  }
}
div {
  background-color: red;
}
.adj {
  border: 1px solid red;
  a {
    background: #000;
    @include asd;
  }
}
#aj:checked {
  background: #000;
}
</style>
