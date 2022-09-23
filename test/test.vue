<template>
  <div c="2">
    <Suspense timeout="2" v-bind:x="1" :a="1" b="3">
      <div>ass</div>
    </Suspense>
    <component is="dog">sss</component>
  </div>
</template>
